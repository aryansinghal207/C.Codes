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


#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i< size;i+=2){
        printf("%d \n",arr[i]);
    }
    printf("\n");
    for(int j=1;j< size;j+=2){
        printf("%d \n",arr[j]);
    }
    return 0;
}