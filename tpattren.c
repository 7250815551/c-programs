#include<stdio.h>

int
main() {
  int triangle, pattern, length;

  printf
    ("select the triangle :\n \t1:full-width triangle \n \t2:half-width triangle ");

  scanf("%d", & triangle);

  printf("select the pattern: \n \t1:simple \n \t2:upside -down");

  scanf("%d", & pattern);

  printf("enter the length of the triangle:  ");

  scanf("%d", & length);

  if (triangle == 1 && pattern == 1)

  {

    for (int i = 0; i <= length; i++) {

      for (int j = i; j <= length - 1; j++) {

        printf(" ");
      }
      for (int k = 0; k < (2 * i) - 1; k++) {

        printf("*");
      }
      printf("\n");

    }

  } else if (triangle == 2 && pattern == 1) {

    for (int i = 0; i <= length; i++) {

      for (int j = i; j <= length - 1; j++) {

        printf(" ");
      }
      for (int k = 0; k < i; k++) {

        printf("*");
      }
      printf("\n");

    }
  }

}