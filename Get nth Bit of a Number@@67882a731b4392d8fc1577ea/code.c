#include <stdio.h>

int main(){
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    if(n&(1<<n))
    printf("%d",a);
    else
    printf("%d",0);
    return 0;
}