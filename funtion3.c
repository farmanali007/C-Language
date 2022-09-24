// takes something return nothing
#include<stdio.h>
#include<stdlib.h>
void add(int,int); // global declaration
void sub (int,int);
int main()
{
    //void add(int,int); local declaration
    int x,y;
    printf("enter tow numbers");
    scanf("%d%d",&x,&y);
    add(x,y); // actaul argument : call by value
    sub(x,y);
    return 0;
}
void add(int a,int b)// formal arguments
{
    int c;
    c=a+b;
    printf("sum is %d",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf(" diff is %d",c);
}