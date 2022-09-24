//write a program to calculate sum of all even numbers between two numbers given by user input//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum=0,i;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(b<a)//this condition is included because if second number is less then after swaping we finding accurate result//
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("sum of all even numbers between %d and %d is %d",a,b,sum);
    return 0;
}