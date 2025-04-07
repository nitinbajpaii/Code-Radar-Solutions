#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int digit,sum,count;
    for(int i=0;i<n;i++){
        digit = arr[i]/10;
        sum = sum*10 + digit;
        digit /= 10;
        if(sum==arr[i]){
            count++;
        }
    }
    printf("%d",count);
}