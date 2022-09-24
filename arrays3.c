#include<stdio.h>
int main(){
    int a[]={123,43,46,53,34,12,54,76};
    int sum=0;
    for(int i=0;i<=7;i++){
        sum=sum+a[i];
    }
   float avg=sum/8.0;
   printf("Sum is %d and avg is %f\n",sum,avg);
   for(int k=0;k<=7;k++){
       if(a[k]<avg){
              printf("%d ",a[k]);
       }
   }
    return 0;
}