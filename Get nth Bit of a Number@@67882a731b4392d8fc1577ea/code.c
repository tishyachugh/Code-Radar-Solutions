#include <stdio.h>

int main(){
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    if(n&(1<<n-1))
    printf("%d",a);
    else
    printf("%d",n);
}