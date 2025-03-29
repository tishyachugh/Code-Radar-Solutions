#include<stdio.h>
int n,i;
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    if (arr[i]>arr[i+1]){
        issorted=0;
        break;
    }
    if(issorted){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted");
    }
}