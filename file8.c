#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    FILE *fp;
    fp=fopen("sum.txt","r");
    if (fp==NULL)
    {
        printf("file is not found");
        exit(1);
    }
    fscanf(fp,"%d,%d,%d",&a,&b,&c);
    printf("a=%d b=%d and c=%d",a,b,c);
    fclose(fp);
    return 0;
}