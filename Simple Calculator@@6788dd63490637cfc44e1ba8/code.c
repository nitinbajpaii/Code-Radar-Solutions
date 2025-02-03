#include <stdio.h>
int main() {
    int a,b;
    float result;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        result=a+b;
        printf("%f",result);  
    }
    else if (c=='-'){
        result = a-b;
        printf("%f",result);
    }
    else if (c=='*'){
        result=a*b;
        printf("%f",result);
    }
    else if (c=='/'){
        result = a/b;
        printf("%f",result);
    }
    else{
        printf("Error");
    }
    return 0;
}