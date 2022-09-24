//write a program to find given number is perfect or not??// the number which has 
#include<stdio.h>         //sum of all divisors=number is called perfect number
#include<stdlib.h>                 //for example 6 has divisors 1,2,and 3 (6 is not included)           
int main()                          //1+2+3=6 sor 6 is perfect square 
{
    int a,b,sum=0,i;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum+=i;
    }
    if(sum==a)
    {
        printf("%d is perfect number\n",a);
    }
    else
    {
    printf("%d is not a perfect number because sum of its all divisors is %d\n",a,sum);
    }
    return 0;

}