#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("numbers before swaping \n a= %d b=%d\n",a,b);
    swap(&a,&b);
    printf("numbers after swaping\n a=%d  b=%d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}