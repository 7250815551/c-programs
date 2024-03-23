#include<stdio.h>
int  main()
{
  int triangle,pattern,length;
  printf("select the triangle :\n \t1:full-width triangle \n \t2:half-width triangle ");
  scanf("%d",&triangle);
  printf("select the pattern: \n \t1:simple \n \t2:upside -down");
  scanf("%d",&pattern);
  printf("enter the length of the triangle:  ");
  scanf("%d",&length);
  if(triangle==1&&pattern==1)
  {
      for(int i=0;i<=length;i++)
     for (int j = 0; j<=2*(length-i ); j++){
    
       printf(" ");} 
     { for( int k=0;k<=2*length;k++){
     

       printf("*");}
     }
     printf("\n");
  }
}
