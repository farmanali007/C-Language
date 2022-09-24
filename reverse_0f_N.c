//write a porgram to reverse a number//
#include<stdio.h>
#include<stdio.h>
int main()
{
    int dummy,n,reverse=0,x;
    printf("enter a number");
    scanf("%d",&n);
    dummy=n;
    while (n>0)
    {
        x=n%10;
        reverse=reverse*10+x;
        n=n/10;
    }
    printf("reverse of %d is %d",dummy,reverse);
    return 0;
    
}