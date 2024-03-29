// #include<stdio.h>
// int main(){
//     int a=5;
//     int* p=&a;// This will store the address of a.
//     printf("%p",p);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=5;
//     int* p=&a;
//     printf("%d",*p);// This will print the number stores in pointer
//     return 0;
// }

// ### Swap two variables with the help of pointers
#include<stdio.h>
void swap(int *x, int *y){
    int ran;
    ran=*x ;
    *x=*y;
    *y=ran;
    return;
}
int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d",b);
    return 0;

}