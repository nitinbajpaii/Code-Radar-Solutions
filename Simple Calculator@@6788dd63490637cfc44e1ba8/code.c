#include <stdio.h>
int main() {
    int a,b,result;
    char a;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        result=a+b;
        printf("%d",result);  
    }
    else if (c=='-'){
        result = a-b;
        printf("%d",result);
    }
    else if (c=='*'){
        result=a*b;
        printf("%d",result);
    }
    else if (c=='/'){
        result = a/b;
        printf("%d",result);
    }
    else{
        printf("Error");
    }
    return 0;
}