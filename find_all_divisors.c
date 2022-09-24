//find all divisors of a number.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    printf("all divisors of %d are\n",a);
    for(i=1;i<=a;i++)
    {
    if(a%i==0)
    printf("%d\n",i);
    }
    return 0;
}