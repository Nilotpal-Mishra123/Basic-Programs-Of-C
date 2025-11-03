#include<stdio.h>
int main(){
    int n,temp,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers to store in array:\n");
    for(int i=0;i<n;i++){
        printf("Enter %d th element: ",i);
        scanf("%d",&temp);
        arr[i]=temp;
        sum+=temp;
    }
    printf("The sum of array is:%d",sum);
    return 0;
}