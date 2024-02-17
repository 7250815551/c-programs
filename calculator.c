#include<stdio.h>
void main()
{    
 int a,b;
 char c;
 printf("enter the first number:");
 scanf("%d",&a);
 printf("enter the second number:");
 scanf("%d",&b);
 printf(" which operation do you want +,-,*,/: ");
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