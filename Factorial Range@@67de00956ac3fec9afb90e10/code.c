#include <stdio.h>
int fact=1;
int factorialRange(int a,int b){
    for(int i=a,i<=b;i++){
        fact *= i;
        printf("%d\n",fact);
    }

}
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    factorialRange(start,end);
    return 0;
}