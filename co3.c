#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    printf("greater no is %d",max);
    return 0;
}