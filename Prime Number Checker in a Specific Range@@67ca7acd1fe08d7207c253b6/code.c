#include <stdio.h>
int printPrimeInrange(int a,int b){
    for(int i=a;i<=b;i++){
        if (i<=1){
            break;
        }
        else if (i==2 || i==3 || i==5 || i==7){
            printf("%d",i);
        }
        else if (i%2==0 || i%3==0 || i%5==0 || i%7==0){
            break;
        }
        else{
            printf("%d",i);
        }
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printPrimeInrange(a,b);
    return 0;

}