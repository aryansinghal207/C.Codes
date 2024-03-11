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
#include <stdio.h>
#include<math.h>
int main() {
    int power=pow(3,3);
    printf("The answer is %d",power);
    return 0;
}