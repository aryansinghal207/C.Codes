// Write a 2D array in C to store the elements of a matrix of size 2x3 and print them.
// #include<stdio.h>
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");  
//     }
//     return 0;
// }

// Write a 2D array in C to store the elements of a matrix of size 3x3 by taking input from user and print them.
#include<stdio.h>
int main(){
    int a,b;
    int arr[a][b];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;b++){
            printf("Enter the element of %d row and %d columns:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}   