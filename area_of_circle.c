#include<stdio.h>
#include<stdlib.h>
int main()
{
     FILE *fp;
     int c;
    float radius,area,pi=3.1416;
    printf("enter redius of circle r=");
    scanf("%f",&radius);
    area=pi*(radius*radius);
    printf("area of circle is a=%f\n
    ",area);


   
     fp = fopen(__FILE__,"r");

     do {
          c = getc(fp); 
          putchar(c);
     }
     while(c != EOF);  
    
     fclose(fp);
    return 0;
}
