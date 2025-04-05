#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
void factorialRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        int fact = factorial(i);  
        printf(%d\n",fact);
    }
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    if (start > 0 && end >= start) {
        factorialRange(start, end);
    } else {
        printf("Invalid range. Please enter positive integers with start <= end.\n");
    }

    return 0;
}