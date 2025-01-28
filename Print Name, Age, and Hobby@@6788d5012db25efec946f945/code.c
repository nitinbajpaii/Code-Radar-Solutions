#include <stdio.h>
int main() {
    char st[20];int age; char Hobby[20];
    scanf("%s %d ",st,&age);
    scanf("%s",Hobby);
    printf("Name: %s",st);
    printf("Age: %d",age);
    printf("Hobby: %s",Hobby);
    return 0;
}