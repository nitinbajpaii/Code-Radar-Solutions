#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    int wordCount = 0;
    int inWord = 0; 
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i] !='0';i++){
        if (isspace(str[i])){
            inWord=0;
        }
        else if (!inWord){
            inWord = 1;
            wordCount++;
        }
        printf("%d",wordCount);
        return 0;

    }
    
    
}
