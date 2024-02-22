#include<stdio.h>
int main()
{  int age;
  int day,months,year;
  int Cday = 21,Cmonths =02,Cyear =2024;
  printf("enter your day:");
  scanf("%d",&day);
  printf("enter your months: ");
  scanf("%d",&months );
  printf("enter your year:");
  scanf("%d",&year);
  int tday,tmonths,tyear;
 
  if(Cday>=day)
  {tday=Cday-day;}
  else{
      tday=day-Cday;
  }
  if(Cmonths>=months)
  {tmonths=Cmonths-months;}
  else{
      tmonths=months-Cmonths;}
   tyear=Cyear-year;   
 printf("you are %d day %d months %d years old",tday,tmonths,tyear);}