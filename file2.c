#include<stdio.h>
#include<stdlib.h>
int main()
{
       FILE *fp;
       char ch;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("file is not found");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
     ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
}
