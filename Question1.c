/*Write a c program to take two integer values from user and display their 
    sum, difference, multiplication and division.*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a is :");
    scanf("%d",&a);
    printf("Enter the value of b is :");
    scanf("%d",&b);
    printf("Enter the value of c is :");
    scanf("%d",&c);
    printf("Enter the value of d is :");
    scanf("%d",&d);

    printf("Sum of two integer number is :%d\n",a+b);
    printf("Difference between two number is :%d\n",a-b);
    printf("Multiplication of two number is :%d\n",a*b);
    printf("Division between two number is :%d\n",c/d);
}