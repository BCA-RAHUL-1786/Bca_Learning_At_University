//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, max;

    for (i = 0; i < 3; i++) {
        max = matrix[i][0]; // Initialize max with first element of each row
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // Update max if a larger element is found
            }
        }
        printf("Maximum element in row %d: %d\n", i+1, max);
    }

    return 0;
}

