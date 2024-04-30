// #include<stdio.h>
// int main(){
//     char arr[]={'a','r','y','a','n','\0'};
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c ",arr[i]);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[]="Aryan Singhal";
//     int i=0;
//     while(i<13){
//         printf("%c",arr[i]);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[]="Aryan Singhal is the best \0";
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    char arr[]="Aryan Singhal is the best \0";
    arr[1]='R';
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}