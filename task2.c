#include<stdio.h>
int main(){
  int b=0;
  for(int i=1; i<=100; i++)
  {
    b=0;
    for(int j=2; j<i; j++){
      if(i%j==0){
        b++;
      }
    }
    if(b!=0)
    {
      printf("%d ",i);
    }
  }

  return 0;
}