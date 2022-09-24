//write a program to calculate gross salary of a employee from his basic pay if employee has houserent allowance of 2% ,dearness allowance %4 and provident allowance 12%.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float basicpay,grossSalary,houseRentAllowance,dearnessAllowance,providentFund;
    printf("enter basicPay: ");
    scanf("%f",&basicpay);
    houseRentAllowance=0.2*basicpay;
    dearnessAllowance=0.4*basicpay;
    providentFund=0.12*basicpay;
    grossSalary=basicpay+houseRentAllowance+providentFund+dearnessAllowance;
    printf("houseRentAllowance=%.2f\n",houseRentAllowance);
    printf("providenFund=%.2f\n",providentFund);
    printf("dearnessAllowance=%.2f\n",dearnessAllowance);
    printf("grossSalary=%.2f",grossSalary);
    return 0;
}