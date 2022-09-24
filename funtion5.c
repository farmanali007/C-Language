// takes something return something
#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum is %d",c);
    c=sub(a,b);
    printf("diff is %d",c);
    return 0;
}
int add(int x,int y)
 {
    int s;
    s=x+y;
    return(s);
 }
int sub(int x,int y)
   {
    int s;
    s=x-y;
    return(s);
 }
