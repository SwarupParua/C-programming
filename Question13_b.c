#include<stdio.h>

int main(){
    int length,breadth,area;
    
    printf("Enter the length of the rectangle is :");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle is :");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of the rectangle is : %d",area);
    return 0;
}