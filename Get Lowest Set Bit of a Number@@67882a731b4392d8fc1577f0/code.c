#include <stdio.h>

int main(){
    int a,count;
    count=0;
    scanf("%d",&a);
    
    while((a&1)==0 && !=0){
        a>>=1;
        count++;
        printf("%d\n",count);
        return 0;
    }

    }