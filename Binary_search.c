#include<stdio.h>

int binary_search(int arr[],int size,int element){
    int low=0,mid,high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}
int main(){
     int arr[]={1,3,45,65,84,96,104};   // array should be sorted
     int size=sizeof(arr)/sizeof(int);
     int element;
     printf("Enter an element to search in array: ");
     scanf("%d",&element);
     int search=binary_search(arr,size,element);
     if(search==-1){
        printf("No such element was found in the array.");
     }
     else{
        printf("The element %d was found at index:%d\n",element,search);
     }
     return 0;
}