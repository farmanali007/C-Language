//write a program to print Odd numbers till N;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    printf("enter a number N=");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)    //another logic is given =for(i=0;i<=a;i++)
        {                                     //if(i%2==1)
        printf("%d\t",i);                    //  printf("%d\n",i);
        }
        else
        continue;
    }
    return 0;
}