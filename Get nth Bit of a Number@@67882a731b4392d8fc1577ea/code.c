#include <stdio.h>

int main(){
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    if(n&(1<<n))
    printf("%d",n);
    else
    printf("%d",a);
    return 0;
}