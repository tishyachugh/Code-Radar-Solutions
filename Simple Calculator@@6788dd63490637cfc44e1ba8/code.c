#include <stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%f%f%c", &a, &b, &op);
    if(op =='+')
    printf("%f\n", a+b);
    else if(op =='-')
    printf("%f\n", a-b);
    else if(op =='*')
    printf("%f\n", a*b);
    else if(op =='/')
    printf(".2%f\n", a/b);
    else
    printf("error");
    return 0;
}