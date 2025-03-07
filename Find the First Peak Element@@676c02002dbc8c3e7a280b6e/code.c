#include <stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n-2;i++){
        scanf("%d",&arr[i]);
    }
    if (arr[i] > arr[i+1] && arr[i] > arr[i-1]){
        printf("%d",arr[i]);
    }
    return 0;
}