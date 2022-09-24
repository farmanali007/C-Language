#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main()
{
    int k,f;
    printf("enter a number");
    scanf("%d",&k);
    f=sum(k);
    printf("%d",f);
    return 0;
}
int sum(int a)
{
    int s;
    if (a==1)
    return(a);
    s=a+sum(a-1);
    return (s);
}