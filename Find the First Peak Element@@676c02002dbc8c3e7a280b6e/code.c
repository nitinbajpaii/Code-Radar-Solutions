#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n-2;i++){
        scanf("%d",&arr[i]);
    }
    if (arr[i+1] > arr[i] && arr[i+1] > arr[i+2]){
        printf("%d",arr[i]);
    }
    return 0;
}