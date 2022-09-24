#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i, count=0,j,maxprime=1;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            count++;
            }
        }
        if(count==2)
        {
            if(maxprime<i)
            {
                maxprime=i;
            }
        }
    }
    printf("maximum prime number below %d is %d\n",num,maxprime);
    return 0;
}