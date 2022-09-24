//write a program to check given no is even or odd?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is even",a);
    else
    printf("%d is odd",a);
    return 0;
}