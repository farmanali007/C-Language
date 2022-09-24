#include<stdio.h>
main()
{
     int i,j,n,k,p;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {

         if(i==1)
         {
             for(k=1 ;k<=n;k++)
             printf("*");
         }
         if(i==n)
         {
             for(p=1;p<=n;p++)
             printf("*");
         }
     for ( j = 1; i <=n; i++)
     {
         if(j==(n+1-i))
         printf("*");

     }
     }


}
