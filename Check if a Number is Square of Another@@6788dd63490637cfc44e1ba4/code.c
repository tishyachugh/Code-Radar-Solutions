#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d%d", &num1, &num2);
    if(num1 == num2*num2 || num2 == num1*num1){
        printf("Yes");
    }
    else
    printf("No");
    return 0 ;

}