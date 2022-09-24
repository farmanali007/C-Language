#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter three no");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    a<c?printf("smaller no is %d",a):printf("smaller no is %d",c);
    else
    {
        b<c?printf("smaller no is%d",b):printf("smaller no is %d",c);
    }
    return 0;
}  