#include<stdio.h>
#include<stdlib.h>
struct date
{
  int d,m,y;
};

int main()
{
    struct date d1;
  printf("Enter today's date: ");
  scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
  printf("%d/%d/%d",d1.d,d1.m,d1.y);
  return 0;
}