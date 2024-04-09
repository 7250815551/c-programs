#include<stdio.h>
void main()
{    

 printf("enter the first number: \n");
 
 printf("enter the second number:\n");
 
 printf(" which operation do you want +,-,*,/: \n");
 
  int a,b;
 char c;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf(" %c",&c);
 if(c=='+')
 {printf("result is %d",a+b);
 }
 else if(c=='-')
 {printf("result is %d",a-b);}
 else if (c=='*')
{printf(" result is %d",a*b);}
else if (c=='/')
{printf("result is %d",a/b);}
  else  {printf("end");}
   

}