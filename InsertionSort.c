#include<stdio.h>
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void InsertionSort(int arr[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={12,54,78,63,45,98};
    int size=6;
    printf("Array before sorting: ");
    printArr(arr,size);
    InsertionSort(arr,size);
    printf("Array after sorting: ");
    printArr(arr,size);
    return 0;
    
}