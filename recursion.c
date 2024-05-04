// WAP to print factoraila of any numebr using recursion
// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,factorial(n));
//     return 0;
// }


// WAP to print something several times using recursion
#include<stdio.h>
int call(int n){
    printf("Good Morning\n");
}
void main(){
    int n=5;
    for(int i=0;i<n;i++){
        call(n);
    }    
}