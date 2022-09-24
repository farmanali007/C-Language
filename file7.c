#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    FILE *fp;
    fp=fopen("sum.txt","w");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    fprintf(fp," %d,%d,%d",a,b,a+b);
    fclose(fp);
    return 0;
}