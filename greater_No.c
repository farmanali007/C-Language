#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    a>c? printf("greater no is %d",a):printf("greater no is %d",c);
    else 
    b>c? printf("greater no is %d",b):printf("greater n0 is %d",c);

    return 0;
}