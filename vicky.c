#include<stdio.h>
int main ()
{
  int maths, physic, chemistry, bio, eng;
  int total = 500;
  int marks;
  int percentage;
  printf ("what is score in maths :");
  scanf ("%d", &maths);
  printf ("what is score in physic :");
  scanf ("%d", &physic);
  printf ("what is score in chemistry :");
  scanf ("%d", &chemistry);
  printf ("what is score in bio :");
  scanf ("%d", &bio);
  printf ("what is score in eng :");
  scanf ("%d", &eng);
  marks = maths + physic + chemistry + bio + eng;
  percentage = marks * 100 / 500;
  if (percentage >= 90)
	{
	  printf ("the grade is A");
	}
  else if (percentage >= 70)
	{
	  printf ("the grade is B");
	}
  else if (percentage >= 50)
	{
	  printf ("the grade is C");
	}
  else if (percentage < 50)
	{
	  printf ("the grade is D");
	}
  else
	{
	  printf ("result is not found");
	}
  return 0;

}
