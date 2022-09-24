#include<stdio.h>
#include<stdlib.h>
int main()
{
    void add(void);
    add();
    return 0;
}
 void add()
 {
     int a,b,c;
     printf("enter a number");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("sum is %d",c);
 }