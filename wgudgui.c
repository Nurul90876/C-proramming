#include <stdio.h>
#include <string.h>
int main (){

char A[11],B[11];
 scanf("%s %s", &A,&B);


int st =strlen(A);
int st1 =strlen(B);
printf("%d %d\n", st,st1);

printf("%s%s\n", A,B);

 int temp=A[0];
 A[0]=B[0];
 B[0]=temp;
printf("%s %s",A,B);










return 0;
}
