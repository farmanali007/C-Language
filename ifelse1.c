#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter three no");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
             printf("greater no is %d",a);
        }
        else
             printf("greater no is %d",c);
    }
    else
    {
        if(b>c)
        printf("greater no is %d",b);
        else
        printf("greater no is %d",c);
    }
    return 0;
}