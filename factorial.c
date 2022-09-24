#include<stdio.h>
#include<stdio.h>
int factorial(int);
int main()
{
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    i=factorial(a);
    printf("%d",i);
    return 0;
    
}
int factorial(int b)
{
    int s;
    if(b==1)
    return(b);
    s=b*factorial(b-1);
    return (s);
}
