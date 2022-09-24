//write a program to calculate sum of all digits of a number given by user input//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dummy,n,sum=0,x;
    printf("etner a numbers: ");
    scanf("%d",&n);
    dummy=n;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("sum of all digits of %d are %d",dummy,sum);
    return 0;
}