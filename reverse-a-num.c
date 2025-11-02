#include <stdio.h>
int main(){
    int num, rev=0, digit=0;
    printf("enter a number to reverse it: ");
    scanf("%d",&num);
    int num_copy=num;
    while(num!=0){
        
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
       
    }
    printf("the number %d after reversing is:%d",num_copy,rev);
    return 0;
}