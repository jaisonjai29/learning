#include<stdio.h>
#include<stdlib.h>
int main()
{
unsigned int row,col;
printf("Enter rows\n");
scanf("%d",&row);
printf("Enter cols\n");
scanf("%d",&col);

//DMA
int **matrix,i,j;
matrix = (int **)malloc(row * sizeof(int *));
for(i=0;i<row;i++)
matrix[i] = (int *)malloc(col * sizeof(int));

for(i=0;i<row;i++)
{
   for(j=0;j<col;j++)
   {
   printf("Please enter value of index [%d][%d]\n",i,j);
   scanf("%d",&matrix[i][j]);
   }
}

printf("values are\n");
for(i=0;i<row;i++)
{
   for(j=0;j<col;j++)
   printf("%d ",matrix[i][j]);
   printf("\n");
}

free(matrix[i]);
free(matrix);
return 1;
}