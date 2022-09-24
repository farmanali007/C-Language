#include<stdio.h>
#include<stdlib.h>
union item
{
    int x; float y; char z;
};
int main()
{
  union item i;
  i.x=5;
  printf("\nx=%d",i.x);
  i.y=79.765;
  printf("\ny=%f",i.y);
  i.z='f';
  printf("\nz=%c",i.z);
  return 0;
}