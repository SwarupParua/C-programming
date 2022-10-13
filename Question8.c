/* Write a C program to perform the following bitwise operations for the 
    inputs A=50,B=5;
    i.      Binary AND Operator
    ii.     Binary OR Operator
    iii.    Binary XOR Operator
    iv.     Binary Ones Complement Operator
    v.      Binary Left Shift Operator on A by 2 bits
    vi.     Binary Right Shift Operator on B by 2 bits */

    #include<stdio.h>
    int main()
    {
        int a=50,b=5;
        printf("Result of a & b is :%d \n",a&b);
        printf("Result of a | b is :%d \n",a|b);
        printf("Result of a ^ b is :%d \n",a^b);
        printf("Result of ~ a is :%d \n",~a);
        printf("Result of ~ b is :%d \n",~b);
        printf("Result of a << 2 is :%d \n",a<<2);
        printf("Result of b << 2 is :%d \n",b<<2);
    }