#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=5,*j;
    j=&x;
    printf("%u\n",*&j);
    printf("%d %u\n",x,j);
    printf("%d %u",*j,&x);
    return 0;
}