/* Write a c program to swap integer values using a third variable. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a is :");
    scanf("%d",&a);
    printf("Enter the value of b is :");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("After swapping value of a is :%d\n",a);
    printf("After swapping value of b is :%d",b);

    return 0;
}