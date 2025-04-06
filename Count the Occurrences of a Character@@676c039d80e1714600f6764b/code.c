#include <stdio.h>
#include <string.h>
int main(){
    char st1[100],st2[1];
    int count;
    scanf("%s",&st1);
    scanf("%s",&st2);
    for(int i=0;st1[i]!=0;i++){
        if(st1[i]==st2){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}