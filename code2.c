#include<stdio.h>
int main()
{
    int i,pos,n,arr[100];
    printf("Enter the size  of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        if(arr[i]==pos){
            printf("Elememnts found at position %d",i+1);
            pos=i+1;
            break;
        }
        }
    }
