#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count[i]=0;
        if (arr[i] = arr[i+1]){
            count[i] ++;
        }
        printf("%d &d",i,count[i]);
    }
    return 0;
    

}