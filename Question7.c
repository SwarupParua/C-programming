/* Write a C program to perform the logical AND, OR operations for 
    the following inputs.
            i. A=10,B=20
            ii. C=0,D=20 */

#include<stdio.h>
int main()
{
    int a=20,b=10,c=20,d=0;
    printf (" %d \n", (a != b && c > d));  
    printf (" %d \n", (a >= b && c >= d));  
    printf (" %d \n", (a == b && c >= d));  
    printf (" %d \n", (a >= b && c <= d));
}