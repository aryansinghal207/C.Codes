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
// #include<stdio.h>
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     printf("Enter the number : ");
//     scanf("%d",&a);
//     printf("Enter the power : ");
//     scanf("%d",&b);
//     printf("The result is %d",power(a,b));
//     return 0;
// }

// WAP to calculate factorail using recursion
// #include<stdio.h>
// int fibo(int n){
//     if(n==0 || n==1 || n==2) return 1;
//     int a1=fibo(n-1);
//     int a2=fibo(n-2);
//     return a1+a2;
// }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int x=fibo(n);
//     printf("The Factorial of %d is %d",n,x);
//     return 0;
// }


// WAP to print stair path
// #include<stdio.h>
// int stair(int n){
//     if(n<=2) return n;
//     int totalways=stair(n-1)+stair(n-2);
//     return totalways;
// }
// int main(){
//     int n;
//     printf("Enter the number of stairs : ");
//     scanf("%d",&n);
//     int x=stair(n);
//     printf("The total ways to reach the top is %d",x);
//     return 0;
// }

// WAP To print logarithmic power function
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    int x=power(a,b);
    printf("The result is %d",x);
    return 0;
}