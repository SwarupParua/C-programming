/*Area and Circumference of Circle*/
#include<stdio.h>
int main(){
    int rad;
    float PI = 3.14, area, ci;
    printf("Enter radius of circle : ");
    scanf("%d",&rad);

    area = PI * rad * rad;
    printf("Area of Circle : %f \n", area);

    ci = 2 * PI * rad;
    printf("Circumference of Circle : %f ", ci);

    return 0;
}