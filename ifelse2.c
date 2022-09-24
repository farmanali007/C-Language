#include <stdio.h>
#include <stdlib.h>
int main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
    if (marks>90)
    printf("Grade-A");
    else if(marks>80)
    printf("Grade-B");
    else if (marks>70)
    printf("grade-C");
    else 
     printf("grade-D"); 
     return 0;
}
