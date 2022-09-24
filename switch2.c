#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    while (1)
    {
    printf("\n1. addition");
    printf("\n2. odd even");
    printf("\n3. print n numbers");
    printf("\n4. exit");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
        break;
    case 2:
    printf("enter a number");
    scanf("%d",&a);
    if (a%2==0)
    printf("%d is even",a);
    else 
    printf("%d is odd",a);
        break;
        case 3:
        printf("enter a number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
        printf(" %d",b);
        break;
        case 4:
        exit(0);
        default:
        printf("invalid choice");
    }
    return 0;
    }
}