// WAP of structure
// #include <stdio.h>
// int main(){
//     struct friends{
//         char name[20];
//         int age;
//         int marks;
//     };
//     struct friends f1;
//     printf("Enter the name of the friend: ");
//     scanf("%s", f1.name);
//     printf("Enter the age of the friend: ");
//     scanf("%d", &f1.age);
//     printf("Enter the marks of the friend: ");
//     scanf("%d", &f1.marks);
//     printf("Name: %s\n", f1.name);
//     printf("Age: %d\n", f1.age);
//     printf("Marks: %d\n", f1.marks);
//     return 0;
// }


// WAP of structure
#include <stdio.h>
int main(){
    struct friends{
        int age;
        int marks;
        char name;
    };
    struct friends f1;
    f1.age = 20;
    f1.marks= 100;
    f1.name = 'A';
    printf("Age: %d\n", f1.age);
    printf("Marks: %d\n", f1.marks);
    printf("Name: %c\n", f1.name);
    return 0;
} 