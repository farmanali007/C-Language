// write a program to find all prime numers withen the given number//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b=0,c,i;
    printf("enter a numbers");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=0;
    for(c=2;c<=i;c++)
    {
        if(i%c==0)
        {
          b++;
        }
    }
    if(b==1)
    {
    printf("%d\n",i);
    }
    
    }
    return 0;

}