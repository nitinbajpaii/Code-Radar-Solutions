#include <stdio.h>
#include <string.h>
int main() {
    char st[300];
    int count =0;
    scanf("%s",st);
    for(int i=0;st[i]!=0;i++){
        count++;
    }
    printf("%d",count);
    return 0;
}