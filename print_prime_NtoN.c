//write a program to print all prime numbers btween two numbers given by user input//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b=0,c,i,x;
    printf("enter two numbers");
    scanf("%d%d",&x,&a);
    if(a<x)
    {
        x=x+a;
        a=x-a;
        x=x-a;
    }
    for(i=x;i<=a;i++)
    {
        b=0;
    for(c=1;c<=i;c++)
    {
        if(i%c==0)
        {
          b++;
        }
    }
    if(b==2)
    {
    printf("%d\n",i);
    }
    
    }
    return 0;

}