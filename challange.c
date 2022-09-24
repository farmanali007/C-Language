#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    if(a%i!=0)
   { printf("no is prime");
    i=a;
   }
    else
    printf("no is not prime");
    return 0;
}