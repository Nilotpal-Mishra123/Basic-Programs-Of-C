#include<stdio.h>
#include<math.h>
void Bin_dec();
void Dec_bin();
int main(){
    int ch;
    printf("For binary->decimal press 1\n");
    printf("For decimal->binary press 2\n");
    printf("enter your choice: ");
    scanf("%d",&ch);
    if (ch==1){
        Bin_dec();
        }
    else if(ch==2){
        Dec_bin();
    }
    else
        printf("Invalid choice");
    return 0;    
}

void Bin_dec(){
    int bin,dec=0,i=0,digit;
    printf("Enter binary number to change in decimal: ");
    scanf("%d",&bin);
    while(bin!=0){
        
        digit=bin%10;
        dec=dec+digit*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("decimal no:%d\n",dec);
}

void Dec_bin(){
    int dec,bin[32],i=0;
    printf("Enter decimal number to change in binary: ");
    scanf("%d",&dec);
    while(dec>0){
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
    printf("Binary equivalent: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
    printf("\n");

}
