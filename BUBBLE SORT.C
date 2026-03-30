#include <stdio.h>

int main() {
    int rows, cols;

    // Get the order of the matrix (number of rows and columns) from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    // Create arrays to store the sums: one for each row, one for each column
    int row_sums[rows];
    int col_sums[cols];

    // Initialize sum arrays to 0
    for(int i = 0; i < rows; i++) row_sums[i] = 0;
    for(int j = 0; j < cols; j++) col_sums[j] = 0;

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums and column sums and store them
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            row_sums[i] += matrix[i][j]; // Add to current row sum
            col_sums[j] += matrix[i][j]; // Add to current column sum
        }
    }

    // Display the row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; ++i) {
        printf("Sum of row %d = %d\n", i + 1, row_sums[i]);
    }

    // Display the column sums
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; ++j) {
        printf("Sum of column %d = %d\n", j + 1, col_sums[j]);
    }

    return 0;
}
