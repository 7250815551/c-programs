#include <stdio.h>
int main() {

  int ascii[100];
     char str[100];

    printf("Enter string:");

    fgets(str,100,stdin);
    for (int a=0;str[a]!='\0';a++){
         ascii[a]=(int)str[a];
    }
    printf("Ascii value : ");
    for (int i=0;ascii[i]!='\0';i++){
    printf("%d ",ascii[i]);
  }

    return 0;
}