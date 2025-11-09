#include<stdio.h>
int linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,34,5,4,2,45,67,89};
    int element;
    printf("Enter an element to search in array: ");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(int);
    int search=linear_search(arr,size,element);
    if (search==-1){
        printf("Element not found in array");
    }
    else{
        printf("The element %d was found at index:%d\n",element,search);
    }
    
    return 0;
}