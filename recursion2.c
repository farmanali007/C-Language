#include<stdio.h>
#include<stdlib.h>
int fectorial(int);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=fectorial(a);
    printf(" fectorial is %d",b);
    return 0;
}
int fectorial(int x)
{
    int s;
    if (x==1)
    return x;
    s=x*fectorial(x-1);
    return s;
}
