//write a program to convert days into years,weeks and days.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nodays,year,weeks,days;
    printf("enter no of days :");
    scanf("%d",&nodays);
    year=nodays/365;//totaol no of days in 1 year are 365 (we are asuming)
    weeks=(nodays%365)/7;//reminder gives us remaning days//remaing days divided by 7 gives us weeks
    days=(nodays%365)%7;// internal reminder gives us days after calculating year and external reminger gives us days after calculating weeks those days are remaining days.
    printf("years=%d weeks=%d days=%d\n",year,weeks,days);
    return 0;
}