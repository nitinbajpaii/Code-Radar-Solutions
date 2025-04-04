#include <stdio.h>
int fibbonacciSeries(int n){
    int a=0,b=1,next_term=0;
    for(int i=1;i<n-1;i++){
        next_term = a+b;
        a=b;
        b=next_term;
        printf("%d ",next_term);
    }
}
int main()
