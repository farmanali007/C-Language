#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[100];
    int i;
    fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
        printf("file can not be open right now");
        exit(1);
    }
    printf("enter a string");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);
    return 0;

}
