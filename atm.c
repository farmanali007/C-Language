#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 main()
{
    while(1)
    {
    int pin,choice;
    static int amount=10000;
    int  deposit, withdraw;
    while(pin !=9999)
    {
      //system("clear");
        printf("\n\t\t\t Enter you pin:-");
        scanf("%d",&pin);
        if(pin!=9999)
        printf("\t\t\tPlease enter valid pin:-");
    }
    while(1)
    {
      //  system("clear");
    printf("\n\n\t\t\t**WELL COME TO ATM SERVICE**\n");
    printf("\t\t\t**BANK OF CHOWK AZAM**\n\n");
    printf("\t\t\t1. Check balance\n");
    printf("\t\t\t2. Withdraw Cash\n");
    printf("\t\t\t3. deposit cash\n");
    printf("\t\t\t4. Exit\n\n");
    printf("\t\t\tenter your choice: ");
    scanf("\n%d",&choice);
    if (choice==4)
    break;
    switch(choice)
    {
        case 1:
        printf("\nYor balnce in Rs:%d ",amount);
        break;
        case 2:
        printf("\n enter the amount to withdraw : ");
        scanf("%d",&withdraw);
        if(withdraw%100!=0)
        printf("\nplease enter amount in multiple of 100");
        else if(withdraw>(amount-500))
        printf("\n insuficent balance");
        else 
        {
            amount=amount-withdraw;
            printf("\n\n collect cash");
            printf("\n your current balance is %d",amount);
        } //system("clear")
        printf("\n ENter amount to deposit");
        scanf("\n%d",&deposit);
        amount=amount+deposit;
        printf("\n your balance is Rs. %d\n",amount);
        break;
        case 4:
        printf("\n thanks for using ATM");
        break;
        default:
        printf("\n invalid choice");
    }
    }// system("clear")
    return 0;
}





