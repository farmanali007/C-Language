//write a program to find weeks,days,hours,mint,sec form given years.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int years,weeks,days,hours,mint,sec;
    printf("enter years :");
    scanf("%d",&years);
    days=years*365;
    weeks=days/7;
    hours=24*days;
    mint=hours*60;
    sec=mint*60;
    printf("\nweeks=%d\ndays=%d\nhours=%d\nmint=%d\nsec=%d\n",weeks,days,hours,mint,sec);
    return 0;
}