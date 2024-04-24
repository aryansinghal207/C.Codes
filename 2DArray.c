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
// #include<stdio.h>
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int sum=0;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

// ### Write a program to print the number of rows number having the maximum sum of elements in a 2D array.
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     int maxSum=0;
//     int maxRow=0;
//     for(int i=0;i<3;i++){
//         sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         if(sum>maxSum){
//             maxSum=sum;
//             maxRow=i;
//         }
//     }
//     printf("Row %d has the maximum sum of %d",maxRow,maxSum);
//     return 0;
// } 

// WAP To print the sum of two matix without using third matrix.
// #include<stdio.h>
// int main(){
//     int arr[2][2]={{1,2},{3,4}};
//     int arr1[2][2]={{5,6},{7,8}};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             arr[i][j]+=arr1[i][j];
//         }
//     }    
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }    
//         printf("\n");
//     }
// }

// WAP to calculate the maximum and minimum 
// #include<stdio.h>
// int main(){
//     int arr[2][2]={{1,2},{3,4}};
//     int max=arr[0][0];
//     int min=arr[0][0];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }
//     printf("Max element is %d\n",max);
//     printf("Min element is %d\n",min);
// }

// WAP to find the maximum element in the matrix and print the maximum element.
// #include<stdio.h>
// int main(){
//     int arr[2][3]={{1,5,3},{3,7,3}};
//     int maxelement=0;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]>maxelement){
//                 maxelement=arr[i][j];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]>maxelement){
//                 printf("%d ",arr[i][j]);
//             }
//         }
//     }
//     printf("The Maximum element is %d",maxelement);
// }


// #WAP to find the row having the maximum sum in a matrix.
#include<stdio.h>
int main(){
    int arr[2][3]={{10,6,3},{7,3,6}};
    int maxSum=0;
    int maxRow=0;
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRow=i;
        }
    }
    printf("Row %d has the maximum sum of %d",maxRow,maxSum);
    return 0;
}
