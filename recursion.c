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
// #include<stdio.h>
// void call(int n){
//     if(n==0) return;
//     printf("Good Morning\n");
//     call(n-1); 
//     return; 
// }
// int main(){
//     int n;
//     printf("Enter number of times u want to print : ");
//     scanf("%d",&n);
//     call(n);  
//     return 0;
// }


// WAP to print from 1 to n
// #include<stdio.h>
// void inc(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     inc(x+1,n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the numbers of u want to printb the number : ");
//     scanf("%d",&n);
//     inc(1,n);
//     return 0;
// }


// WAP to print a raised to power b using recursion..
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    printf("The result is %d",power(a,b));
    return 0;
}
