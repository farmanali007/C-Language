#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    // printf("Enter two number");
    // scanf("%d%d",&a,&b);
    // printf("sum of %d and %d is %d",a,b,a+b);
    // return 0;
    printf("Plz Enter First Number : ");
    scanf("%d" , &a);
    printf("Plz Enter Sencond Number : ");
    scanf("%d" , &b);
    if(a>b){
    printf("%d is Greater Than %d" , a,b );
    }
    else{
        printf("%d is Greater Than %d" , b,a );

    }
}