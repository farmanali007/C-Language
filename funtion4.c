//take nothing return something
#include <stdio.h>
#include <stdlib.h>
int add();
int sub();
int main()
{
    int s;
    s=add();
    printf("sum is %d",s);
    s=sub();
    printf("diff is %d",s);
    return 0;
}
int add()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return (c);
}
int sub()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a-b;
    return(c);
}