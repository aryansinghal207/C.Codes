// #include<stdio.h>
// int main(){
//     int arr[4];
//     for(int i=0;i<=4;i++){
//         scanf("%d ",&arr[i]);
//     }
//     printf("%d",arr[2]);                                                                   
//     return 0;
// } 

// #include<stdio.h>
// int main(){
//     int marks[10]={11,22,33,44,55,66,77,88,99,00};
//     for(int i=0;i<=9;i++){
//         if(marks[i]<=35){
//             printf("%d \n",marks[i]);
//         }
//     }                                                                 
//     return 0;
// } 

// #include<stdio.h>
// int main(){
//     int marks[10]={11,22,33,44,55,66,77,88,99,00};
//     for(int i=0;i<=9;i++){
//         if(marks[i]<=35){
//             printf("%d \n",i);
//         }
//     }                                                                 
//     return 0;
// } 

// #include<stdio.h>
// int main(){
//     int num[5]={1,2,3,45,5};
//     int sum=0;
//     for(int i;i<=4;i++){
//         sum=sum + num[i];
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num[5]={1,2,3,4,5};
//     int sum=1;
//     for(int i;i<=4;i++){
//         sum=sum*num[i];
//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// void fun(int a[]){
//     a[0]=1;
//     return;
// }
// int main(){
//     int arr[5]={6,2,3,4,5};
//     printf("%d \n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]);
//     return 0;
// }


// ### To print all the even and odd element of array..
// #include<stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i< size;i+=2){
//         printf("%d \n",arr[i]);
//     }
//     printf("\n");
//     for(int j=1;j< size;j+=2){
//         printf("%d \n",arr[j]);
//     }
//     return 0;
// }


// Multiply odd element of array with 2 and add 10 to even elements of array..
// #include<stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<9;i++){
//         if(i%2==0){
//             arr[i]*=2;
//         }
//         else{
//             arr[i]+=10;
//         }
//     }
//     for(int i=0;i<=9;i++){
//         printf(" %d ",arr[i]);
//     }
//     return 0;
// }


// Difference of sum of even index to the sum of odd index
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int sumeven=0;
//     int sumodd=0;
//     for(int i=0;i<=6;i++){
//         if(i%2==0){
//             sumeven += arr[i];
//         }
//         else{
//             sumodd +=arr[i];
//         }
//     }
//     printf("%d",sumeven-sumodd);
//     return 0;
// }


// ##Find the total number of pairs in the array whose sum is equal to the given value a.
// #include<stdio.h>
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int a;
//     printf("Enter a value : ");
//     scanf("%d",&a);
//     int count=0;
//     for(int i=0;i<=7;i++){
//         for(int j=i+1;j<=7;j++){
//             if(arr[i]+arr[j]==a){
//                 count++;
//                 printf("(%d,%d) \n",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// ##Find the total number of triplet pairs in the array whose sum is equal to the given value a.
// #include<stdio.h>
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int a;
//     printf("Enter a value : ");
//     scanf("%d",&a);
//     int count=0;
//     for(int i=0;i<=7;i++){
//         for(int j=i+1;j<=7;j++){
//             for(int z=j+1;z<=7;z++){
//                 if(arr[i]+arr[j]+arr[z]==a){
//                     count++;
//                     printf("(%d,%d,%d) \n",arr[i],arr[j],arr[z]);
//                 }
//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// ##Find the second largest element in the array.
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 20, 4, 45, 6, 89, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, first, second;

    /* There should be atleast two elements */
    if (n < 2) {
        printf(" Invalid Input ");
        return 0;
    }

    first = second = INT_MIN;
    for (i = 0; i < n ; i ++) {
        /* If current element is greater than first then update both
          first and second */
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and second then update second  */
        else if (arr[i] > second && arr[i] < first)
            second = arr[i];
    }

    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n", second);

    return 0;
}
