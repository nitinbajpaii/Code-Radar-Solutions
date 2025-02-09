#include <stdio.h>
#include <string.h>
int main() {
    char st[300];
    gets(st);
    scanf("%s",st);
    puts("%d",strlen(st));
    return 0;
}