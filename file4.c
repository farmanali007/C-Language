#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[50];
    FILE *fp;
    fp=fopen("f1.txt","a");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("enter your name");
    gets(a);
    fputs(a,fp);
    fclose(fp);
    return 0;
}