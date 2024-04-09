#include<stdio.h>

int fullSimple(length){
  for (int i = 0; i <= length; i++) {
    for (int j = i; j <= length - 1; j++) {
      printf("  ");
    }
    for (int k = 0; k < (2 * i) - 1; k++) {
      printf("* ");
    }
    printf("\n");
  }
}
int halfsimple(length){
   for (int i = 1; i <= length; i++) {
     for (int j = i; j <= length - 1; j++) {
       printf("  ");
     }
     for (int k = 0; k < i; k++) {
       printf("* ");
     }
     printf("\n");
   }
   
 }
int fullUD(length){
  for (int i = 0;i <length; i++) { 

  for (int j = 0; j < 2 * i; j++) { 

      printf(" "); }



  for (int k = 0; k < 2 * (length - i) - 1; k++) { 

      printf("* "); 

  } 

  printf("\n");}
}
int halfUD(length){
  for(int i=1;i<=length+1;i++){
     for (int j = 0; j<i-1; j++){
       printf("  ");} 
      for( int k=length+1;k>i;k--){
       printf("* ");}
        printf("\n");
  }
  
}
int  main(){

  int triangle,pattern,length;
      printf("select the triangle :\n \t1:full-width triangle \n \t2:half-width triangle  \n:");
  scanf("%d",&triangle);
  printf("select the pattern: \n \t1:simple \n \t2:upside -down \n \t3:flip \n:");
  scanf("%d",&pattern);
  printf("enter the length of the triangle: ");
  scanf("%d",&length);

  if(triangle==1&&pattern==1){
    fullSimple(length);
  }
  else if(triangle ==1 && pattern==2){
    fullUD(length);

    } 
  else if(triangle==2&&pattern==1){
    halfsimple(length);
  } 
  else if(triangle==2&&pattern==2){   
    halfUD(length);
   
 }
     else if(triangle==2&&pattern==3){
    for(int i=0;i<=length;i++){
        for(int j=0;j<=i;j++){
           printf("* ");}
       printf("\n "); 
     }}

}
