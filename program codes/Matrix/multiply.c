#include<stdio.h>
int main()
{
    int col1,row1;
    printf("Number of columns: ");
    scanf("%d",&col1);
    printf("Number of rows: ");
    scanf("%d",&row1);
    int matrix1[row1][col1];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("Enter the %d row and %d column: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }

    int col2,row2;
    printf("Number of columns: ");
    scanf("%d",&col2);
    printf("Number of rows: ");
    scanf("%d",&row2);
    int matrix2[row2][col2];

    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("Enter the %d row and %d column: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
        printf("\n");
    }

    if(col1!=row2)
    {
        printf("Multiplication not possible");
    }
    else
    {
        for(int i=0;i<row2;i++)
        {
            for(int j=0;j<col1;j++)
            {
                int matrix3[i][j];
                for(int k=0;k<col1;k++)
                {
                    matrix3[i][j]=matrix3[i][j]+matrix1[i][j]*matrix2[k][j];
                }
            }
        }
    }
}