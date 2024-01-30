// // ##GP##//
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
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    for (int i=2;i<=a-1;i++){
        if(a%i==0){
            printf("The Entered Number is a composite: \n");
            break;
        }
        else{
            printf("The number is Prime \n");
            break;
        }
    }
    return 0;
}
