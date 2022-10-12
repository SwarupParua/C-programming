/* Write a c program to take temperature in degree C and display its equivalent
    degree F temperature */

#include<stdio.h>
int main()
{
    float celcius,farenheit;
    printf("Enter temperature in celcius :");
    scanf("%f",&celcius);
    farenheit=celcius*(9/5)+32;
    printf("Temperature in farenheit is :%f",farenheit);
}