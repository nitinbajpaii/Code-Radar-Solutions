#include <stdio.h>
int main(){
    int a,b,fact=1;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        fact *=i;
        printf("%d\n",fact);

    }
    return 0;
}