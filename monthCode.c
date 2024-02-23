#include<stdio.h>
int
main ()
{
  int monthCode;
  int temp;

  printf ("enter month");
  scanf ("%d", temp);
  switch (temp)
	{
	case 1:
	  monthCode = 0;
	  break;
	case 2:
	  monthCode = 3;
	  break;
	case 3:
	  monthCode = 3;
	  break;
	case 4:
	  monthCode = 6;
	  break;
	case 5:
	  monthCode = 1;
	  break;
	case 6:
	  monthCode = 4;
	  break;
	case 7:
	  monthCode = 6;
	  break;
	case 8:
	  monthCode = 2;
	  break;
	case 9:
	  monthCode = 5;
	  break;
	case 10:
	  monthCode = 0;
	  break;
	case 11:
	  monthCode = 3;
	  break;
	case 12:
	  monthCode = 5;
	  break;
	Deafult:
	  printf ("wrong months");

	}
  
	printf ("d", monthCode);
  
}
