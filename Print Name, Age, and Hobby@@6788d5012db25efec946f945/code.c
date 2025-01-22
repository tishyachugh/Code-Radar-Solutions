#include <stdio.h>

int main(){
    char name[50] , hobby[50];
    int age;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your favourite hobby:");
    scanf("%s",hobby);

    printf("Name: %s\n",name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;


}