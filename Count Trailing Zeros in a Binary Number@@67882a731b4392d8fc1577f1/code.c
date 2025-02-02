#include <stdio.h>
int main(){
    int a, count;
    count=0;
    scanf("%d",&a);
    if(a==0){
        printf("32");
        return 0;
    }
    while((x & 1) == 0){
        count++;
        x=x>>1;
    }
    printf("%d",count);
    return 0;
}