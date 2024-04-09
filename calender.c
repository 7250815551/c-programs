
#include<stdio.h>

int
main ()
{
  int monthCode;
  int yearCode;
  int date;
  int temp;
  int result;
  int centuryCode;
  int leapyear;
  int year;
  int yy;

  printf ("enter date");
  scanf ("%d", &date);

  printf ("enter month");

  scanf ("%d", &temp);

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
	  printf ("wrong month");


	}


  printf ("enter year");

  scanf ("%d", &year);


  if (year >= 1600 && year <= 1699)

	{
	  centuryCode = 6;
	}


  else if (year >= 1700 && year <= 1799)

	{
	  centuryCode = 6;
	}


  else if (year >= 1800 && year <= 1899)

	{
	  centuryCode = 2;
	}


  else if (year >= 1900 && year <= 1999)

	{
	  centuryCode = 0;
	}


  else if (year >= 2000 && year <= 2099)

	{
	  centuryCode = 6;
	}

  else if (year >= 2100 && year <= 2199)

	{
	  centuryCode = 4;
	}

  else if (year >= 2200 && year <= 2299)

	{
	  centuryCode = 2;
	}

  else if (year >= 2300 && year <= 2399)

	{
	  centuryCode = 0;
	}

  else
	{
	  printf ("wrong selection");
	}
  // printf(" %d\n",centuryCode);


  if ((year % 4 == 0) && (year % 100 != 0))
	{
	  leapyear = 1;

	}
  else
	{
	  leapyear = 0;
	}
  //printf("%d",leapyear);
  yy = year % 100;
  yearCode = (yy + (yy / 4)) % 7;
  // printf("%d %d",yy,yearCode);
  result = (yearCode + monthCode + centuryCode + date - leapyear) % 7;

  switch (result)
	{
	case 0:
	  printf ("sunday");
	  break;
	case 1:
	  printf ("monday");
	  break;

	case 2:
	  printf ("tuesday");
	  break;
	case 3:
	  printf ("wednesday");
	  break;
	case 4:
	  printf ("thursday");
	  break;
	case 5:
	  printf ("friday");
	  break;
	case 6:
	  printf ("saturday");
	  break;
	default:
	  printf ("error");
	}
}