#include<stdio.h>

int  add(num1,num2)
{return num1+num2;}
int sub(num1,num2)
{return num1-num2;}
int mul(num1,num2)
{return num1*num2;}
int div(num1,num2)
{ return num1/num2;}
int per(num1,num2)
{return  (num1*num2)/100;}
int main()
{
  int num1,num2;
  int  choice;
  printf("Enter two numbers:");
  scanf("%d %d",&num1,&num2);
  printf("1.+\n2.-\n3.*\n4./\n5.%%\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
 // printf("%d",choice);
  switch(choice){
    case 1 :
      printf("The sum is %d\n", add(num1, num2));
      break;
    case 2 :
      printf("The sub is %d\n",sub(num1,num2));
      break;
    case 3 :
      printf("The mult is %d\n",mul(num1,num2));
      break;
    case 4 :
      printf("the div is %d\n",div(num1,num2));
      break;
    case 5 :
      printf("the per is %d\n",per(num1,num2));
      break;
    default :
      printf("Invalid choice");
      break;
  }
    
}