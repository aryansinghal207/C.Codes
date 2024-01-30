// ###Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.
// #include<stdio.h>
// int main(){
//     float r;
//     printf("Enter the value of Radius:");
//     scanf("%f",&r);
//     float pi=3.1415;
//     float a=pi*r*r;
//     float b=2*pi*r;
//     printf("The area of circle is: %f\n",a);
//     printf("The circumference of circle is: %f",b);
//     return 0;
// }

// ###Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The Sum of a and b is: %d\n",a+b);
    printf("The difference of a and b is: %d\n",a-b);
    printf("The divident of a and b is: %d\n",a/b);
    printf("The multiplication of a and b is: %d",a*b);
    return 0;
}