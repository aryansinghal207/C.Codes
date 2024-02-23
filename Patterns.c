// ### Basic pattern code to print any shape using stars by taking input from user... 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int m;
//     printf("Enter a number : ");
//     scanf("%d",&m);
//     for (int i = 1; i <=n; i++){
//         for (int j=1;j< m;j++){
//             printf("*");
//         }
//         printf("*\n");
//     }
//     return 0;
// }


// ### A code to print equal number of rows and column in digits...
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter The number of lines : ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ### Star Triangle... 
// #include<stdio.h>
// int main(){
    // int a;
    // printf("Enter The number of lines : ");
    // scanf("%d",&a);
    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//     return 0;
// }


// ###Inverted Star Triangle
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter The number of lines : ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a+1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ###Number Triangle
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }


// ###Odd Number Triangle
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=2*i-1;j=j+2){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// ###ABCD Pattern
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter The number of lines : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n;j++){
//         int d=a+64;
//         char ch=(char)d;
//         printf("%c",ch);
//         a++;
//         }
//         printf("\n");
//     }
//     return 0;
// } 

// ###ABCD Triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter The Number of Rows : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
    //     int a=1;
    //     for(int j=1;j<=i;j++){
    //         int d=a+64;
    //         char ch=(char)d;
    //         printf("%c",ch);
    //         a++;
    //     }
    //     printf("\n");
    // }
//     return 0;
// }


// ###Print the following pattern
// ***AB
// ***123
// ***ABCD
// ***12345
// #include<stdio.h>
// int main(){
//     int a;
//     printf("The Number of rows to be printed : ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         if(i%2==0){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             int d=a+64;
//             char ch=(char)d;
//             printf("%c",ch);
//             a++;
//         }
//         printf("\n");
//     }
//     else{
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     }
//     return 0;
// }

// ###Print the star plus pattern
// #include<stdio.h> 
// int main(){
//     int a;
//     printf("Enter the value of number of rows : ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             if(j==a/2+1 || i==a/2+1) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }

// ###Print the Hollow Rectangle
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Ënter the number of rows : ");
//     scanf("%d",&a);
//     int b;
//     printf("Ënter the number of columns : ");
//     scanf("%d",&b);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=b;j++){
//         if(i==6 || j==4) printf("*");
//         else printf("#");
//         }
//         printf("\n");
//     }
// }

// ### Star Cross pattern
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter The number of lines : ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             if(i==j || i+j==a+1) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }  
// }

// ###Floyd's Triangle
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter The number of rows :");
//     scanf("%d",&a);
//     int x=1;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",x);
//             x++;
//         }
//         printf("\n");
        
//     }
//     return 0;
// }


// ### 0&1 Triangle###
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter The number of rows :");
//     scanf("%d",&a);
//     int x;
//     for(int i=1;i<=a;i++){
//         if(i%2!=0) x=1; 
//         else x=0;
//         for(int j=1;j<=i;j++){
//             printf("%d",x);
//             if(x==0) x=1;
//             else x=0;
//         }
//         printf("\n");
        
//     }
//     return 0;
// }



// ###Star Triangle MAST###
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows : ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows : ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=4;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// ### Star Pyramid
#include<stdio.h>
int main(){
    int a;
    printf("Enter the Number of lines u wonna print :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}