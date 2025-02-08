#include <stdio.h>
#include <string.h>
int main() {
    char st1[300],st2[300];
    scanf("%s",st1);
    scanf("%s",st2);
    strcat(st1,st2);
    printf("%s\n",st1);
    return 0;
}