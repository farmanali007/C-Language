//write a program for multiplication without using * operator//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,mul=0,i;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(b<0)
    {
        b=-b;
        a=-a;
    }
    for(i=1;i<=b;i++)
    mul+=a;
    printf("\nmultiplication is %d",mul);
    return 0;
}