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


// #WAP to find the row having the maximum sum in a matrix.
// #include<stdio.h>
// int main(){
//     int arr[2][3]={{10,6,3},{7,3,6}};
//     int maxSum=0;
//     int maxRow=0;
//     for(int i=0;i<2;i++){
//         int sum=0;
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

// WAP to find the sum of element that matches the input value by user
// #include<stdio.h>
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int sum=0;
//     int n;
//     printf("Enter the number you want to find : ");
//     scanf("%d",&n);
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==n){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     printf("The sum of the element is %d",sum);
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int arr[5];
//     int i;
//     printf("Enter elements of array:\n");
//     for(i = 0; i < 5; i++) {
//         printf("Enter element at position %d: ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("Array elements are:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
// }


// Make a transpose of a matrix by taking inputs from user
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of rows : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the size of columns : ");
//     scanf("%d",&b);
//     int arr[a][b];
//     int arr1[a][b];
//     printf("Enter the elements of the matrix \n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element at position %d,%d : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             arr1[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Rotate a matrix by 90 degree Cloclwise
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of rows : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the size of columns : ");
//     scanf("%d",&b);
//     int arr[a][b];
//     int arr1[a][b];
//     printf("Enter the elements of the matrix \n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element at position %d,%d : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             arr1[j][a-1-i]=arr[i][j];
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Matrix Multiplication
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of rows : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the size of columns : ");
//     scanf("%d",&b);
//     int arr[a][b];
//     int arr1[a][b];
//     int arr2[a][b];
//     printf("Enter the elements of the matrix \n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element at position %d,%d : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Enter the elements of the 2nd matrix \n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Enter the element at position %d,%d : ",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             arr2[i][j]=0;
//             for(int k=0;k<a;k++){
//                 arr2[i][j]+=arr[i][k]*arr1[k][j];
//             }
//         }
//     }
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("%d ",arr2[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

