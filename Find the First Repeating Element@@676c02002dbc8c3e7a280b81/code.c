#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeat = -1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeat = arr[i];
                break;
            }
        }
        if (repeat != -1) {
            break; 
        }
    }

    if (repeat != -1) {
        printf("%d", repeat);
    } else {
        printf("-1");
    }

    return 0;
}