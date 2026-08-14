#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size\n");
    scanf("%d" , &n);

    int a[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &a[i]);  
    }

     int cunt[7] ={0};
    for(int i =0; i<n; i++){
        int value = a[i];
        cunt[value]++;
    }

 for(int i=0; i<7; i++){
        printf("%d-  %d\n" , i,cunt[i]);
    }
    return 0;
}
