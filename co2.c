#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    a>b?printf("greater no is %d",a):printf("greater no is %d",b);
    return 0;
}