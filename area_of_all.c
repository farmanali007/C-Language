#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf("Enter\n 1 for area of circle\n 2 for area of triangle\n 3 for area of rectangle\n 4 for area of parallelogram\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
       { 
        int r;
        float area;
        printf("enter radius of circlr r= ");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("area of circle with radius %d is %.2f\n",r,area);
        break;
       }
        case 2:
        {
        int base,height;
        float area;
        printf("enter base and height of triangle\n");
        scanf("%d%d",&base,&height);
        area=base*height*1/2;
        printf("area of triangle with base %d and height %d is %.2f\n",base,height,area);
        break;
        }
        case 3:
        {
        int area,length,birdth;
        printf("enter lenght and birdth of rectangle\n");
        scanf("%d%d",&length,&birdth);
        area=length*birdth;
        printf("area of rectangle with length %d and birdth %d is %d\n",length,birdth,area);
        break;
        }
        case 4:
        {
        int base,height,area;
        printf("enter base and height of paralelogram\n");
        scanf("%d%d",&base,&height);
        area=base*height;
        printf("area of paralelogram with base %d and height %d is %d",base,height,area);
        break;
        }
        default:
        {
            printf("\n invalid choice\n");
        }

    }
    return 0;
}