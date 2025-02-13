#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==0){
        printf("%d",a-1);
    }
    else if(b==1){
        printf("%d",a-2);
    }
    else if (b==3){
        printf("%d",a-4);
    }
    else if (b==4){
        printf("%d",a-8);
    }
    return 0;
}