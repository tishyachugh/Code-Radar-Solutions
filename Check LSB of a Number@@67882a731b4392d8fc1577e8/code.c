#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a&1)==1)  // (a&1) is also correct [for msb num&(1<<31)]
    printf("Set");
    else
    printf("Not Set");
}