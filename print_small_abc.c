//print small letters of english alphabets a to z.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=97;i<=122;i++)//this program is same as to print numbers from 97 to 122 but if you remeber that ascii values of alphabets(a to z) are 97 to 122 so if we print %c it will be print ascii value of that no insted of interger value..
    printf("%c ",i);
    return 0;
}