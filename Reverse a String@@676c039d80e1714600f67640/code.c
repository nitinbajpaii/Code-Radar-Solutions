#include <stdio.h>

int main() {
    char str[100];
    int i, j, temp;
    scanf("%s", str);
    for(i = 0, j = 0; str[j] != '\0'; j++);
    j--; 

    for(i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s\n", str);

    return 0;
}
