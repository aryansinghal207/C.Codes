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

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5,9};
    int a=-1;
    for(int i=0;i<=5;i++){
        if(a<arr[i]){
            i=arr[i];
        }
        printf("%d",a);
    }
}