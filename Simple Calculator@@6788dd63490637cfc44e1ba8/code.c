#include <stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%d%d%c", &a, &b, &op);
    if(op =='+')
    printf("%d\n", a+b);
    else if(op =='-')
    printf("%d\n", a-b);
    else if(op =='*')
    printf("%d\n", a*b);
    else if(op =='/')
    printf(".2%f\n", a/b);
    else
    printf("error");
    return 0;
}