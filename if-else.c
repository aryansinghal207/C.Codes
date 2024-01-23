#include<stdio.h>
int main(){
    int a;
    printf("Input any number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("Number is even");}
    else {
        printf("Number is odd");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Input any Year number:");
//     scanf("%d",&a);

//     if(a%100 || a%4){
//         printf("The year is leap year");}
//     else {
//         printf("The year is not a leap year");
//     }
//     return 0;
// }

// ##To convert any value to absolute Value
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Input any number:");
//     scanf("%d",&a);

//     if(a>0){
//         printf("The absolute value is: %d",a);}
//     else if(a==0) {
//         printf("The absolute value is: %d",a);
//     }
//     else {
//         printf("The absolute value is: %d",a*(-1));
//     }
//     return 0;
// }