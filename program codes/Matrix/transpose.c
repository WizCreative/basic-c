/*Matrix Transpose
 * Authors - Deepak M R, Ashwin P Shine
 *
 *
 * */

#include <stdio.h>
void main() {
  // This is to get the number of rows and coloumns of the Matrix
  int col, row;
  printf("Number of columns: ");
  scanf("%d", &col);
  printf("Number of rows: ");
  scanf("%d", &row);

  // Intializing the matrix and getting the input
  int matrix[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("Enter the %d row and %d column: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
    printf("\n");
  }

  // Printing the matrix upside down (switching i and j)
  printf("The Transpose is : \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }
}
