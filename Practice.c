//###Factorial
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter The value for Factorail: ");
//     scanf("%d",&n);
//     int product = 1;
//     int i=1;
//     for(i=1;i<=n;i++);{
//         product= product*i;
//     }
//     printf("The Factorail is : %d",product);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the value of b:");
//     scanf("%d",&b);
//     printf("After Swapping the variables a is: %d\n",b);
//     printf("After Swapping the variables b is: %d",a);
//     return 0;
// }


// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollno;
//     float marks;
// };
// int main() {
//     struct Student Student1;
//     printf("Enter name: ");
//     scanf("%s", Student1.name);
//     printf("Enter Roll No: ");
//     scanf("%d", &Student1.rollno);
//     printf("Enter Marks: ");
//     scanf("%f", &Student1.marks);
//     printf("\nDetails of Student1:\n");
//     printf("Name: %s\n", Student1.name);
//     printf("Roll No: %d\n", Student1.rollno);
//     printf("Marks: %.2f\n", Student1.marks);
//     return 0;
// }

// #include <stdio.h>
// struct height {
//     int feet;
//     float inches;
// };
// int main() {
//     struct height height1;
//     printf("Enter height in feets : ");
//     scanf("%d", &height1.feet);
//     printf("Enter height in inches: ");
//     scanf("%f", &height1.inches);
//     printf("\nHeight of individual:\n");
//     printf("The Height is %d feet and %.1f inches",height1.feet,height1.inches);
//     return 0;
// }


// #include <stdio.h>
// struct height {
//     int feet;
//     float inches;
// };
// int main() {
//     struct height height1;
//     printf("Enter height in feets : ");
//     scanf("%d", &height1.feet);
//     printf("Enter height in inches: ");
//     scanf("%f", &height1.inches);
//     if(height1.inches >= 12){
//         height1.feet=height1.feet+1;
//         height1.inches=height1.inches-12;
//         printf("\nDetails of individual:\n");
//         printf("The Height is %d feet and %.1f inches",height1.feet,height1.inches);
//     }
//     else{
//         printf("\nDetails of individual:\n");
//         printf("The Height is %d feet and %.1f inches",height1.feet,height1.inches);
//     }
//     return 0;
// }


// Write a program to enter the numbers till the user wants and 
// at the end it should display the count of positive, negative and 
// zeros entered.
// #include <stdio.h>
// int main(){
//     int n;
//     int positive=0;
//     int negative=0;
//     int zero=0;
//     while(n!=0){
//         if(n>0){
//             positive++;
//         }
//         else if(n<0){
//             negative++;
//         }
//         else{
//             zero++;
//         }
//         printf("Enter the number: ");
//         scanf("%d",&n);
//     }
//     printf("The number of positive numbers are: %d\n",positive);
//     printf("The number of negative numbers are: %d\n",negative);
//     printf("The number of zeros are: %d\n",zero);
//     return 0;
// }

// Wap to convert days into years,weeks,and days
// #include<stdio.h>
// int main(){
//     int days;
//     printf("Enter the number of days: ");
//     scanf("%d",&days);
//     int years=days/365;
//     int weeks=(days%365)/7;
//     int d=(days%365)%7;
//     printf("The number of years are: %d\n",years);
//     printf("The number of weeks are: %d\n",weeks);
//     printf("The number of days are: %d\n",d);
//     return 0;
// }


// WAP to calculate the amount using compound interest
// #include<stdio.h>
// int main(){
//     float p;
//     float r;
//     float t;
//     printf("Enter the principal amount: ");
//     scanf("%f",&p);
//     printf("Enter the rate of interest: ");
//     scanf("%f",&r);
//     printf("Enter the time period: ");
//     scanf("%f",&t);
//     float amount = p*(1+r/100)*t;
//     printf("The amount is: %f",amount);
//     return 0;
// }


// WAP To check reverse and original number is equal
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int original=n;
//     int reverse=0;
//     while(n!=0){
//         int rem=n%10;
//         reverse=reverse*10+rem;
//         n=n/10;
//     }
//     if(original==reverse){
//         printf("The number is palindrome");
//     }
//     else{
//         printf("The number is not palindrome");
//     }
//     return 0;
// }


// WAP to check the character eithe uppercase or lowercase
// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter the character: ");
//     scanf("%c",&c);
//     if(c>='A' && c<='Z'){
//         printf("The character is uppercase");
//     }
//     else if(c>='a' && c<='z'){
//         printf("The character is lowercase");
//     }
//     else{
//         printf("The character is not an alphabet");
//     }
//     return 0;
// }


// given amount count notes in it
// #include<stdio.h>
// int main(){
//     int amount;
//     printf("Enter the amount: ");
//     scanf("%d",&amount);
//     int notes[7]={2000,500,200,100,50,20,10};
//     int count[7]={0};
//     for(int i=0;i<7;i++){
//         if(amount>=notes[i]){
//             count[i]=amount/notes[i];
//             amount=amount-count[i]*notes[i];
//         }
//     }
//     for(int i=0;i<7;i++){
//         if(count[i]!=0){
//             printf("%d notes of %d\n",count[i],notes[i]);
//         }
//     }
//     return 0;
// }


// WAP to print all natural numbers from n to 0.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=n;i>=0;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }


// WAP to print the reverse of number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(n>0){
//         int rem=n%10;
//         printf("%d",rem);
//         n=n/10;
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    char str[22]="Hello Aryan this side.";
    int i=0;
    while(i<=22){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}