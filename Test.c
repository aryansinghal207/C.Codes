// WAP to check a number is Armstrong or not using For Loop.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int originalnumber=n;
    int sum=0;
    while(n>0){
        int lastnumber=n%10;
        sum+=lastnumber*lastnumber*lastnumber;
        n=n/10;
    }
    if(sum==originalnumber){
        printf("This number is Armstrong");
    }
    else{
        printf("The number is not Armstrong");
    }
    return 0;
}