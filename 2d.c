#include<stdio.h>
int main()
{
    int height,width;


    printf("enter the width of array: ");
  scanf("%d",&width);
  printf("enter the height of array: ");
  scanf("%d",&height);
   int arr[width][height];
   for(int i=0;i<=(sizeof(arr)/4)/height-1;i++)
   {for(int j=0;j<=(sizeof(arr)/4)/width-1;j++)
   {printf("enter the for row %d column %d : ",i,j);
   scanf("%d",&arr[i][j]);}
   printf("\n");
   }
 for(int i=0;i<=(sizeof(arr)/4)/height-1;i++)
   {for(int j=0;j<=(sizeof(arr)/4)/width-1;j++)
   {printf("%d",arr[i][j]);}

   printf("\n");
   }
}	 















