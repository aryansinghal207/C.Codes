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

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     gets(str);
//     printf("Your input was : %s",str);
//     return 0;
// }

// WAP to print reverse of string using puts and gets
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     gets(str);
//     strrev(str);
//     puts(str);
//     return 0;
// }

// WAP to swap two  strings using puts and gets
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[40],str2[40],temp[40];
//     gets(str1);
//     gets(str2);
//     printf("Before swapping\n");
//     puts(str1);
//     puts(str2);
//     strcpy(temp,str1);
//     strcpy(str1,str2);
//     strcpy(str2,temp);
//     printf("After swapping\n");
//     puts(str1);
//     puts(str2);
//     return 0;
// }

// WAP to swap two  strings without using string header file
// #include<stdio.h>
// int main(){
//     char str1[40],str2[40],temp[40];
//     gets(str1);
//     gets(str2);
//     printf("Before swapping\n");
//     puts(str1);
//     puts(str2);
//     int i=0;
//     while(str1[i]!='\0'){
//         temp[i]=str1[i];
//         i++;
//     }
//     temp[i]='\0';
//     i=0;
//     while(str1[i]!='\0'){
//         str1[i]=str2[i];
//         i++;
//     }
//     str1[i]='\0';
//     i=0;
//     while(str1[i]!='\0'){
//         str2[i]=temp[i];
//         i++;
//     }
//     str2[i]='\0';
//     printf("After swapping\n");
//     puts(str1);
//     puts(str2);
//     return 0;
// }


// WAP to find the length of the string using strlen
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     gets(str);
//     printf("Length of the string is %d",strlen(str));
//     return 0;
// }


// WAP To shift the string forward from any index
// #include<stdio.h>
// int main(){
//     char str[40]="Aryan";
//     printf("%s \n",str);
//     for(int i=6;i>=2;i--){
//         str[i+1]=str[i];
//     }
//     str[2]='k';
//     printf("%s",str);
//     return 0;
// }