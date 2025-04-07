#include <stdio.h>
int is_palindromic(int num) {
    int reversed = 0, original = num, digit;
    while (num > 0) {
        digit = num % 10;         
        reversed = reversed * 10 + digit; 
        num /= 10;               
    }
    return reversed == original; }

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int palindromic_count = 0;
    for (int i = 0; i < n; i++) {
        if (is_palindromic(arr[i])) {
            palindromic_count++;
        }
    }
    printf("%d", palindromic_count);
    return 0;
}