/*Area of a Triangle*/
#include<stdio.h>
int main(){
    float area, base, height;
    printf("Enter the base of the triangle : ");
    scanf("%f",&base);
    printf("\nEnter the height of the triangle : ");
    scanf("%f",&height);

    area =(base * height)/2;
    printf("\nArea of a Triangle is : %f",area);
    return 0;
}