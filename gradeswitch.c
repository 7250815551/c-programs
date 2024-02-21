#include<stdio.h>
int main()

{
 int maths,chem,bio,phy,eng;
 int total =500;
 int percentage;
 int grade;
 int marks;
 
 
 printf("enter the marks of maths:");
 scanf("%d",&maths);
printf("enter the marks of chem:");
 scanf("%d",&chem);
 printf("enter the marks of bio:");
 scanf("%d",&bio);
 printf("enter the marks of phy:");
 scanf("%d",&phy);
 printf("enter the marks of eng:");
 scanf("%d",&eng);
 marks = maths + phy + chem + bio + eng;
  percentage = marks * 100 / 5000;
	
	 switch(percentage)
	 {
	 case 10:
	 case 9:
	 printf( "grade is A");
	break;
     case 8:
	 printf( "grade is B");
	break;
	 case 7:
	 printf( "grade is C");
	break;
	 case 6:
	 printf( "grade is D");
	break;
	 default:
	 printf( "FAIL");
	 }
}
	