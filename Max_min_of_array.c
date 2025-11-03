#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of elements you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    printf("\t\t\tEnter the elements of array\n");
    for(int i=0;i<n;i++){
        printf("\tenter the %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\t\tThe min. element of array is:%d\n\t\tThe max. element of array is:%d",min,max);
    return 0;
}