#include <stdio.h>
int main(){
    int a,count;
    count=0;
    scanf("%d",&a);
    if(a==0){
        printf("32");
        return 0;
    }
    while((a & (1<<31))==0){
        count++;
        a=a<<1;
    }
    printf("%d",count);
    return 0;
}