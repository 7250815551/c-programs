
#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("enter in 2d array \n");
  // input date
    for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++)
    {
        printf("row %d  column %d : ",i,j);
        scanf("%d",&arr[i][j]);
    }

}   
  for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++) { 
         printf("%d",arr[i][j]);}
         printf("\n");}

  // calculation
         int option; 
     int row,column;
     int newData;
      printf("\n\nchosse optoin:\n\t1:change\n\t2:delete");
    scanf("%d",&option);
  switch(option){
  case 1:
       printf("which row and column do you want to delete: ");
     scanf("%d %d",&row,&column);
     printf("enter the new data: ");
     scanf("%d",&newData);
     arr[row][column]=newData;
     break;
  case 2:
  printf("which row and column do you want to delete: ");
     scanf("%d %d",&row,&column);
     arr[row][column]=0;
  break;
  default:
  printf("invaled option");
  }





      // output data
     for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++) { 
         printf("%d",arr[i][j]);}
         printf("\n");
     }


}