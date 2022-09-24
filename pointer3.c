#include<stdio.h>
#include<stdlib.h>
void input(int*);
void display(int*);
void sort(int*);
int main()
{
    int a[5];
    printf("Enter 5 numbers");
    input(a);
    sort(a);
    display(a);
    return 0;
}
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
    scanf("%d",p+i);
}
void display(int *p)
{
    int i;
    for (i=0;i<=4;i++)
    printf(" %d",*(p+i));
}
void sort(int *p)
{
    int round,t,i;
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=3;i++)
        if((*p+i)>*(p+i+1))
        {
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
        }
    }
}