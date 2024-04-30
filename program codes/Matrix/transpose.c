#include<stdio.h>
int main()
{
    int col,row;
    printf("Number of columns: ");
    scanf("%d",&col);
    printf("Number of rows: ");
    scanf("%d",&row);

    int matrix[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the %d row and %d column: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose is : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}