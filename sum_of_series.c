//sum of serires 1/1+1/2+
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(float)1/i;  
    }
    printf("the sum of series\n");
        for(i=1;i<=n;i++)
        {
            if(i<n)
            printf("1/%d+",i);
            else
            printf("1/%d= ",i);
        }
        
    printf("%f",sum);
    return 0;

}
