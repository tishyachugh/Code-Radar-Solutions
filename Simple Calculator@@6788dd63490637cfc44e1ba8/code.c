#include <stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%f%f%c", &a, &b, &op);
    if(op =='+')
    printf("%f", a+b);
    else if(op =='-')
    printf("%f", a-b);
    else if(op =='*')
    printf("%f", a*b);
    else if(op =='/')
    printf("%f", a / b);
    else
    printf("error");
    return 0;
}