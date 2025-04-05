#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int vowel_count =0;
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='o' ||str[i]=='i' || str[i]=='u'){
            vowel_count += 1;
        } 
    }
    printf("%d",vowel_count);
    return 0;
}