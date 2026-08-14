#include <stdio.h>

int main (){

char s[100001];



fgets(s,1000001,stdin);
for(int i=0; s[i]!='\\'; i++){
    printf("%s", s[i]);
}


return 0;
}

