#include <stdio.h>
int main (){
 int n,ans=-1;
 scanf ("%d", &n);

 int arr[n];
 for( int i=0; i<n; i++){

    scanf("%d", &arr[i]);
 }


int x;
scanf("%d", &x);


 for( int i=0; i<n; i++){
        if(arr[i] == x){
            ans=i;
            break;
        }
 }
    printf("%d\n", ans);



return 0;

}
