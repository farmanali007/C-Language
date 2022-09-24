//write a program to find leap year.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year,i;
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            printf("%d is leap year",year);
            else
            printf("%d is not a leap year",year);
        }
        else
        printf("%d is  leap year",year);
    }
    else
    printf("%d is not leap year",year);
    return 0;
}