/*simple intrest*/
#include<stdio.h>
int main(){
    float amount,rate,time,SI;
    printf("Enter the Principal Amount : ");
    scanf("%f",&amount);

    printf("\nEnter the Rate of Intrest : ");
    scanf("%f",&rate);
    printf("\nEnter the period of time : ");
    scanf("%f",&time);

    SI = (amount * rate * time) / 100;
    printf("\nSimple Intrest : %f",SI);

    return 0;
}