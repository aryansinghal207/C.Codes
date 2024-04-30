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


#include <stdio.h>
struct height {
    int feet;
    float inches;
};
int main() {
    struct height height1;
    printf("Enter height in feets : ");
    scanf("%d", &height1.feet);
    printf("Enter height in inches: ");
    scanf("%f", &height1.inches);
    if(height1.inches >= 12){
        height1.feet=height1.feet+1;
        height1.inches=height1.inches-12;
        printf("\nDetails of individual:\n");
        printf("The Height is %d feet and %.1f inches",height1.feet,height1.inches);
    }
    else{
        printf("\nDetails of individual:\n");
        printf("The Height is %d feet and %.1f inches",height1.feet,height1.inches);
    }
    return 0;
}
