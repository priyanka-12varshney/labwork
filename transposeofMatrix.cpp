#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10], r, c;

    // Getting the number of rows and columns from the user
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Getting the elements of the matrix from the user
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Printing the entered matrix
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    }

    // Computing the transpose of the matrix
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    // Printing the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    }

    return 0;
}

