#include <stdio.h>
int main(){
    int rows,columns;
    scanf("%d",rows);
    rows=columns;
    for(int r=1;r<rows;r++){
        for(int c=1;c<columns;c++){
            printf("* ");
        }
        printf("\n");
    }
}