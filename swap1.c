//write a program to swap two numbers by using thrird number.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("nubmers before swaping a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nnumbers after swaping a=%d and b=%d",a,b);
    return 0;
}