
#include<stdio.h>
int main(){
    int a[]={38,57,114,786,634,293,123,457,234,734,345,923,1000,523,765,456,324,273,523,900,183,468};
    for(int i=0;i<=21;i++){
        for(int k=i+1;k<=21;k++){
            for(int q=k+1;q<=21;q++){
                if(a[i]+a[k]+a[q]==2014){
                   int sum=a[i]+a[k]+a[q];
                     printf("sum of %d ,%d and %d is equal to %d\n",a[i],a[k],a[q],sum);
                }
                }
            }
        }
        return 0;
    }