#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    
    int row_sums[rows];
    int col_sums[cols];

    
    for(int i = 0; i < rows; i++) row_sums[i] = 0;
    for(int j = 0; j < cols; j++) col_sums[j] = 0;

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            row_sums[i] += matrix[i][j]; 
            col_sums[j] += matrix[i][j]; 
        }
    }

    
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; ++i) {
        printf("Sum of row %d = %d\n", i + 1, row_sums[i]);
    }

  
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; ++j) {
        printf("Sum of column %d = %d\n", j + 1, col_sums[j]);
    }

    return 0;
}
