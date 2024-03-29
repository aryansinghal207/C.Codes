// Main syntax
// #include <stdio.h>
// void (){
//     printf("");
//     return;
// }
// int main() {
    
//     return 0;
// }


// Basic Function
// #include <stdio.h>
// void greet(){
//     printf("Good Morning\n");
//     printf("How are u ?\n");
//     return;
// }
// int main() {
//     greet();
//     greet();
//     greet();
//     return 0;
// }

// Calling Function in function
// #include <stdio.h>
// void england(){
//     printf("You are in England \n");
//     return;
// }
// void australia(){
//     printf("You are in Australia \n");
//     england();
//     return;
// }
// void india(){
//     printf("You are in India \n");
//     australia();
//     return;
// }
// int main() {
//     india();
//     return 0;
// }


// Sum of 2 numbers using functions
// #include <stdio.h>
// void sum(){
//     int a,b;
//     printf("Enter First Number : ");
//     scanf("%d",&a);
//     printf("Enter Second Number : ");
//     scanf("%d",&b);
//     printf("The Sum of Entered Number is : %d \n",a+b);
//     return;
// }
// int main() {
//     sum();
//     sum();
//     return 0;
// }


// library Function
// #include <stdio.h>                                                                 
// #include<math.h>
// int main() {
//     int a;
//     printf("Enter the number : ");
//     scanf("%d",&a);
//     int root=sqrt(a);
//     printf("The suare root is %d",root);
//     return 0;
// }


// library Function
// #include <stdio.h>
// #include<math.h>
// int main() {
//     int power=pow(3,3);
//     printf("The answer is %d",power);
//     return 0;
// }


// Calling Function in function without any proper sequence(Function Prototype)
// #include <stdio.h>

// void australia(){
//     printf("You are in Australia \n");
//     void england();
//     england();
//     return;
// }
// int main() {
//     void india();
//     india();
//     return 0;
// }

// void india(){
//     printf("You are in India \n");
//     void australaia();
//     australia();
//     return;
// }

// void england(){
//     printf("You are in England \n");
//     return;
// }


//Combination Programme
// #include<stdio.h>
// int factorial(int x){
//     int fact =1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter the value of r : ");
//     scanf("%d",&r);
//     int nfact=factorial(n);
//     int rfact=factorial(r);
//     int nrfact=factorial(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }


//Factorial Programme
// #include<stdio.h>
// int factorial(int x){
//     int fact =1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int a=factorial(6);
//     printf("%d",a);
//     return 0;
// }


//Pascal Triangle in triangular form
// #include<stdio.h>
// int factorial(int x){
//     int fact =1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             int icj=combination(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Swap Variable without using third variable
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the number : ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("The value of a is %d \n",a);
//     printf("The value of b is %d",b);
//     return 0;
// }

