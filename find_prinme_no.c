#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,count=0;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime no\n",a);
    }
    else
    {
    printf("%d is not prime\n because %d is divisible by \n",a,a );
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d\n",i);
    }
    }

    return 0;
    
}