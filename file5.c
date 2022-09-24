#include<stdio.h>
#include<stdlib.h>
struct book
{
    int bookid;
    float price;
};
int main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("myfile.dat","wb");
    if(fp==NULL) 
    {
        printf("file not found");
        exit(1);
    }
    printf("enter bookid title and price");
    scanf("%d",&b1.bookid);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    return 0;
}