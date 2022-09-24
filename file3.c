#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[20];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("file is not found");
        exit(1);
    }
    while(fgets(a,5,fp)!=NULL)
    printf("%s",a);
    fclose(fp);
    return 0;  
}