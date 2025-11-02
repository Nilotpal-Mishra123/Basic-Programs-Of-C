#include <stdio.h>

int main() {
    char day;   //m-mon, t-tue, w-wed, h-thu, f-fri, s-sat, u-sun
    printf("Enter day alphabet (m,t,w,h,f,s,u): ");
    scanf("%c", &day);
    switch(day) {
        case 'm':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'h':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 's':
            printf("Saturday\n");
            break;
        case 'u':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }
    return 0;
}