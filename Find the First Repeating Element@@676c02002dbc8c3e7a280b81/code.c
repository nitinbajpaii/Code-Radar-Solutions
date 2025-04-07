#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int repeat;
    for(int i=0;i<n;i++){
        if (repeat==arr[i]){
            repeat = arr[i];
        }
    }
    printf("%d",repeat);
}