/*write a program to print first 10 even natural number*/

#include<stdio.h>
int main()
{
    int i=1;
    printf("First 10 even natural number is :");
    while(i<=10)
    {
        printf("%d\n",2*i);
        i++;
    }
}