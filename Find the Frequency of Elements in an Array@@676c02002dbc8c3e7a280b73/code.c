#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], count[n];
    for (int i = 0; i < n; i++) {
        count[i] = -1;  
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                count[j] = 0;
            }
        }
        if (count[i] != 0) {
            count[i] = freq;
        }
    }
    for (int i = 0; i < n; i++) {
        if (count[i] != 0) {
            printf("%d %d\n", arr[i], count[i]);
        }
    }

    return 0;
}