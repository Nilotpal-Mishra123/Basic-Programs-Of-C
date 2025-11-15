#include<stdio.h>
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int indexOfMin=i,temp;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin=j;
            }
            
        }
        temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
    }
}
int main(){
    int arr[]={12,54,78,63,45,98};
    int size=6;
    printf("Array before sorting: ");
    printArr(arr,size);
    SelectionSort(arr,size);
    printf("Array after sorting: ");
    printArr(arr,size);
    return 0;
    
}