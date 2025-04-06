#include <stdio.h>
#include <string.h>
int main() {
    char st[300];
    int count =0;
    fgets(st,sizeof(st),stdin);
    for(int i=0;st[i]!=0;i++){
        if(st[i]!='\n'){
        count++;}
    }
    printf("%d",count);
    return 0;
}