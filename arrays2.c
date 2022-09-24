#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("how many numbers youenter  in an array\n");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("your entered array is given below\n");
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\nmax number in arry is ");
        for(int q=0;q<n;q++){
            for(int p=0;p<n;p++) {
                if(a[q]>a[p]){
                    printf("%d",a[q]);
                }
            }
        }
     return 0;
}