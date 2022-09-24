//A company decides to give bonus to all its employees on new year. A 5% bonus on salary is given to male worksers and 10% bonus on salary is given to female workers. write a C program to enter the salary and gender of the employees. If the salary of the employee is less than 100000,then the employee gets an extra 2% bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the employee will get?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float salary,bonus;
    char gender;
    printf("enter M for male and F for female: \n");
    scanf("%c",&gender);
    printf("enter your salary\n");
    scanf("%f",&salary);
    if( gender=='M' || gender=='m')
    {
        bonus=salary*5/100;
        if(salary<100000)
        bonus+=salary*2/100;
        salary=bonus+salary;
    }
    if(gender=='F'|| gender=='f')
    {
        bonus=salary*10/100;
        if(salary<100000)
        bonus+=salary*2/100;
        salary=bonus+salary;
    }
    printf("\nsalary=%f\nbonus=%f\n",salary,bonus);

    return 0;
}