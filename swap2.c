//write a program to swap two numbers without using third number.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    printf("before swaping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swaping a=%d and b=%d",a,b);
    return 0;
}