#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("how many numbers you enter in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("element at index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("the orignal array is\n");
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    printf("\nthe reverse array is given below\n");
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}