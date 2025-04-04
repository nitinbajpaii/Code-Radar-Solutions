#include <stdio.h>
void fibonacciSeries(int n){
    int a=0,b=1,next_term=0;
    for(int i=1;i<n-1;i++){
        next_term = a+b;
        a=b;
        b=next_term;
        printf("%d ",next_term);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;

}
