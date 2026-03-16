#include <stdio.h>

void transpose(int rows, int cols, int mat[rows][cols], int tras[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tras[j][i] = mat[i][j];
        }
    }
}

int main() {
    int r = 3, c = 2;
    int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int result[2][3];

    transpose(r, c, matrix, result);

    printf("Transposed Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
