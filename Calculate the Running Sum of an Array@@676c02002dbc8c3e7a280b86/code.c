#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    for(int i=0;i<n;i++){
        sum += arr[i];
        printf("%d ",sum);
    }
    return 0;
}