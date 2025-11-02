#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum,digit;
    printf("Armstrong numbers b/w 1 to 1000 are: ");
    for(num=1;num<=1000;num++){
        temp=num;
        sum=0;
        while(temp!=0){
            digit=temp%10;
            sum=sum+pow(digit,3);
            temp/=10;
        }
        if(sum==num){
            printf("%d\n",num);
    }
    }
    return 0;
}