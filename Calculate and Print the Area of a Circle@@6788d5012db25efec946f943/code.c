#include <stdio.h>
int main(){
    float radius, area;
    float Pi = 3.14;
 
    scanf("%f",&radius);
    area = Pi*radius*radius;
    printf("Area: %.2f\n",area);
    return 0;
}