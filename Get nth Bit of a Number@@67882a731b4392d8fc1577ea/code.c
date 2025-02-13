#include <stdio.h>

int main(){
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    printf("%d",a>>n & 1);
    return 0;}
   