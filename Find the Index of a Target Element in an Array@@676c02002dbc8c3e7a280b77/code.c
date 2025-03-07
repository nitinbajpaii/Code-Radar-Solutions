#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(int i=0;i<n-1;i++){
        if (arr[i] == a){
            printf("%d",i);
        }
        else{
            printf("-1");
        }

    }

    return 0;
}