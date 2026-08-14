#include <stdio.h>
#include <string.h>
#define MAX 50

char *prod[] = {"", "S->CC", "C->cC", "C->d"};

int action[10][3] = {
    {3,4,-1}, {-1,-1,-2}, {6,7,-1}, {3,4,-1},
    {-3,-3,-3}, {-1,-1,-1}, {6,7,-1},
    {-3,-3,-3}, {-2,-2,-2}, {-2,-2,-2}
};

int go_to[10][2] = {
    {1,2},{-1,-1},{-1,5},{-1,8},{-1,-1},
    {-1,-1},{-1,9},{-1,-1},{-1,-1},{-1,-1}
};

int main() {
    int stack[MAX], top = -1, i = 0;
    char input[MAX];

    printf("Enter input string (end with $): ");
    scanf("%s", input);

    stack[++top] = 0;

    while (1) {
        int state = stack[top];
        char a = input[i];
        int act = action[state][(a=='c'?0:(a=='d'?1:2))];

        if (act > 0) {
            stack[++top] = act;
            i++;
        } else if (act == -2) {
            printf("Accepted\n");
            break;
        } else {
            printf("Error\n");
            break;
        }
    }
    return 0;
}
