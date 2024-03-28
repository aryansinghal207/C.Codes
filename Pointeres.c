// #include<stdio.h>
// int main(){
//     int a=5;
//     int* p=&a;// This will store the address of a.
//     printf("%p",p);
//     return 0;
// }

#include<stdio.h>
int main(){
    int a=5;
    int* p=&a;// This will store the address of a.
    printf("%d",*p);
    return 0;
}