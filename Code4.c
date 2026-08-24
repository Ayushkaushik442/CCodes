#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10],i,j;
    printf("Enter the number of rows and column of matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of first matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[10][10]);
        }
    }
    printf("The sum of the two matrix are: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}