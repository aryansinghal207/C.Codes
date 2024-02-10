// ### Basic pattern code to print any shape using stars by taking input from user... 
// #include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m;
    printf("Enter a number : ");
    scanf("%d",&m);
    for (int i = 1; i <=n; i++){
        for (int j=1;j< m;j++){
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}


// ### A code to print equal number of rows and column in digits...
#include<stdio.h>
int main(){
    int a;
    printf("Enter The number of lines : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


// ### Star Triangle... 
#include<stdio.h>
int main(){
    int a;
    printf("Enter The number of lines : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// ###Inverted Star Triangle
#include<stdio.h>
int main(){
    int a;
    printf("Enter The number of lines : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

