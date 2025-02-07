#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Corrected to &arr[i]
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}
