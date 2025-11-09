#include<stdio.h>
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[],int size){
    int temp;
    int isSorted=0;
    for(int i=0;i<size;i++){     //for number of passes
        isSorted=1;
        for(int j=0;j<size-1-i;j++){     //for comparison in each pass
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;        
            }
        }
        if(isSorted){      //return if no swapping occured in this pass
            return;
        }
    }
}
int main(){
    int arr[]={12,54,78,63,45,98};
    int size=6;
    printf("Array before sorting: ");
    printArr(arr,size);
    bubbleSort(arr,size);
    printf("Array after sorting: ");
    printArr(arr,size);
    return 0;
    
}