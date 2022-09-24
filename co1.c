#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    a>0?printf("positive"): printf("no positive");
    return 0;
}