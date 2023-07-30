#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], matrix_sum[3][3];
    int i, j;

    //Input values to the first matrix
    printf("Enter values for first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value for row %d, column %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //Input values to the second matrix
    printf("Enter values for second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value for row %d, column %d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //Find matrix sum and store in third matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    //Display matrix sum
    printf("Matrix sum:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix_sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
