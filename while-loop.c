#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int count=0;
  while (a!=0){
    a=a/10;
    count++;
  }
  printf("The Size of The input value is: %d",count);
  return 0;
}

// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int sum=0;
//     int last=0;
//     while (a!=0)
//     {
//         last=a%10;
//         sum=sum+last;
//         a=a/10;
//     }
//     printf("The Sum of digits are %d",sum);     
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int r=0;
//     while (a>0)
//     {
//         r=r+(a%10);
//         r=r*10;
//         a=a/10;
//     }
//     printf("The Reversed Number Is %d",r);
//     return 0;
// }