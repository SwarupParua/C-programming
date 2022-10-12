/* Write a c program to find the largest number among two numbers using ternary
    operator. */

#include<stdio.h>
int main()
{
    int a,b,larg;
    printf("Enter the value of a is :");
    scanf("%d",&a);
    printf("Enter the value of b is :");
    scanf("%d",&b);

    larg=(a>b) ? (a) :(b);
    printf("The largest number is :%d",larg);

    return 0;
}