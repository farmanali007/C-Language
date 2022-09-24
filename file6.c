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
    fp=fopen("myfile.dat","rb");
    if(fp==NULL)
    {
        printf("file is not found");
        exit(1);
    }
    fread(&b1,sizeof(b1),1,fp);
    printf("%d\n%f\n",b1.bookid,b1.price);
    fclose(fp);
    return 0;
}