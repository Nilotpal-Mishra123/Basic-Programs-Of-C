#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows & columns: ");
    scanf("%d",&n);
    int element,sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("Enter [%d %d] element: ",i,j);
            scanf("%d",&element);
            if(i==j){
                sum+=element;
            }
        }
    }
    printf("The sum of diagnals is: %d",sum);

}