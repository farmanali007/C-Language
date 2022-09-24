#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d%d",a,b);
    return 0;
}