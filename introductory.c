// #include<stdio.h>
// int main(){
//   int a=10;
//   printf("The Age of Aryan is: %d",a);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   float r=5;
//   float pie=3.14;
//   float volume=4*pie*r*r*r /3;
//   printf("The Volume of sphere with radius is: %f",volume);
//   return 0;
// }

//  #include<stdio.h>
//  int main(){
//     float radius;
//     scanf("%f",&radius);
//     float pi=3.1415;
//     float area=pi*radius*radius;
//     printf("The Area of circle is : %f",area);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Input any number:");
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("Number is even");}
//     else {
//         printf("Number is odd");
//     }
//     return 0;
// }

// ##GP##//
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         printf("%d ", a);
//         a=a*2;
//     }
//     return 0;
// }

// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter The number of terms u want :");
//     scanf("%d",&n);
//     int a=3;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*4;
//     }
// }

// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
// }

// #include<stdio.h>
// void main(){
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
// }


// ##Prime Number##//
// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     for (int i=2;i<=a-1;i++){
//         if(a%i==0){
//             printf("The Entered Number is a composite: \n");
//             break;
//         }
//         else{
//             printf("The number is Prime \n");
//             break;
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//   int a;
//   scanf("%d",&a);
//   int count=0;
//   while (a!=0){
//     a=a/10;
//     count++;
//   }
//   printf("The Size of The input value is: %d",count);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int sum=0;
//     int last=0;
//     while (a!=0)
//     {
//         last=a%10;
//         sum=sum+last;
//         a=a/10;
//     }
//     printf("The Sum of digits are %d",sum);     
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int r=0;
//     while (a>0)
//     {
//         r=r+(a%10);
//         r=r*10;
//         a=a/10;
//     }
//     printf("The Reversed Number Is %d",r);
//     return 0;
// }