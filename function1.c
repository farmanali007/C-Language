// takes nothing return nothing.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    void add(void);
    void isEven(void);
    void sub(void);
    add();
    isEven();
    sub();
    return 0;
}

void add()
{
    int a,b,c;
    printf("\n enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nsum is %d",c);
}
void isEven()
{
    int a;
    printf("\n enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("\n %d is even",a);
    else
    printf("\n%d is odd",a);
}
void sub()
{
    int a,b,c;
    printf("\nenter two numbers");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("\n diff is %d",c);
}