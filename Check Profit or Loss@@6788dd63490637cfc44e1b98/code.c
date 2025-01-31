#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    printf("Profit");
    else if(a==0)
    printf("No Profit");
    else
    printf("Loss");
    return 0;
}