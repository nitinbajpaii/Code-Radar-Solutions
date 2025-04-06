#include <stdio.h>
#include <string.h>
int main() {
    char st1[300],st2[300];
    fgets(st1,sizeof(st1),stdin);
    fgets(st2,sizeof(st2),stdin);
    strcat(st1,st2);
    printf("%s\n",st1);
    return 0;
}