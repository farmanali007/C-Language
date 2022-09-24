//write a program to multiply two numbers by using addition when 2nd no is not negitive number//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,m=0,y;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
        m+=a;//a*b means we add 'a' into 'a' for 'b' times// 
        printf("%d multiply by %d =%d \n",a,b,m);
        return 0;
}