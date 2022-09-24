//write a program to calculate sum of N numbers//
#include<stdio.h>
#include<stdlib.h>
int main()
{   //we are also write this program by using recursions//
    int num,i,sum=0;
    printf("enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=i;
    printf("sum is %d",sum);
    return 0;

}