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

// #include<stdio.h>
// int main(){
//     char arr[]="Aryan Singhal is the best \0";
//     arr[1]='R';
//     int i=0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="Aryan Singhal is the best";
//     puts(str);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);
    printf("Your input was : %s",str);
    return 0;
}