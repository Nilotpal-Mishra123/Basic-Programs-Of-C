#include<stdio.h>
int main(){
    int n,fibo=0;
    printf("enter the length of series: ");
    scanf("%d",&n);
    int first=0,second=1;
    printf("%d\t%d\t",first,second);
    for(int i=2;i<n;i++){
        fibo=first+second;
        printf("%d\t",fibo);
        first=second;
        second=fibo;
        
    }
    return 0;
}