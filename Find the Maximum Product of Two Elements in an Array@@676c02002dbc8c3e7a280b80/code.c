#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0]*arr[1];
    for(int i=0;i<n-1;i++){
        if(arr[i]*arr[i+1]>max){
            max = arr[i] *arr[i+1];
        }
    }
    printf("%d",max);
    return 0;
}