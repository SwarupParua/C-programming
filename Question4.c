/* Write a c program to read radius of a circle and calculate its area and 
    perimeter. */

#include<stdio.h>
int main()
{
    float r,p,a;
    printf("Enterthe radius of the circle is :");
    scanf("%f",&r);

    p=2*3.14*r;
    a=3.14*r*r;

    printf("Perimeter of the circle is :%f\n",p);
    printf("Area of the circle is :%f",a);

    return 0;
}