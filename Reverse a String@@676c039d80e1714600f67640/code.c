#include <stdio.h>
int main() {
    char st[50],result[50];
    scanf("%s",st);
    result = st[::-1];
    printf("%s",result);

    return 0;
}