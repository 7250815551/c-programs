// #include<stdio.h>
// int main()
// {
//   char a ='A';
//   printf("%d",a);
// }
/// ///////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//   char a;
//   printf("Enter a char :");
//   scanf(" %c",&a);
//   printf("The Ascii value of \"%c\" is : %d.",a,a);
// }
/////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>

// int main() {

//    char str[]="hello";
//     printf("Normal string: %s \n",str);
//      int ascii[100];
//     for (int a=0;str[a]!='\0';a++){
//         printf("%d",a);
//          ascii[a]=(int)str[a];

//     }


//     printf("Ascii value : ");
//   //int  length=sizeof(ascii)/sizeof(ascii[0]);
//     for (int i=0;ascii[i]!='\0';i++){
//     printf("%d",ascii[i]);

//    }

//     return 0;
// }
///////////////////////////////////////////////////
#include <stdio.h>
int main() {

   int ascii[100];
     char str[100];

    printf("Enter string:");
     gets(str);
    for (int a=0;str[a]!='\0';a++){
         ascii[a]=(int)str[a];
    }
    printf("Ascii value : ");
    for (int i=0;ascii[i]!='\0';i++){
    printf("%d",ascii[i]);
   }

    return 0;
}