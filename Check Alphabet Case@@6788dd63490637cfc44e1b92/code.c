#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a>='A' && a<='Z'){
        printf("Uppercase");
    }
    else if( a>='a' && a<='z'){
        printf("Lowewrcase");
    }

    return 0;
}