#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a,&b);
    if (a>=b){
        printf("Yes");
    }
    else if (b>=a){
        printf("No");
    }
    return 0;
}