#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max; 
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        printf("-1");
    } else {
        printf("%d\n", secondMax);
    }

    return 0;
}