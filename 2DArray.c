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

// ###Find the sum of all the elements of a 2D array in C.
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}