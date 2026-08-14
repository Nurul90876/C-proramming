#include <stdio.h>
int main (){

int t;

scanf("%d", &t);

char a[101];
scanf("%s",&a);

char A[101];
scanf("%s", &A);

int st  = strlen(A);
if(st>10){
    printf("%c%d%c\n", A[0],st-2,A[st-1]);
}
else{
    printf("%s\n",A);
}

















return 0;
}
