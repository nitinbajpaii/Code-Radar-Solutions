#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n],count[i];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    for (int i = 0; i < n; i++) { 
        if (arr[i] == arr[i+1]) {
            count[i]++;  
        }
    }
    printf("%d",count[i]);

    return 0;
}
