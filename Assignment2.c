#include <stdio.h>

void read(int (*m)[100], int n) {
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void display(int (*m)[100], int n) {
    printf("Matrix entered:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int row_total(int (*m)[100], int n, int row) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += m[row][i];
    }
    return total;
}

int is_identity(int (*m)[100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && m[i][j] != 1) {
                return 0;
            } else if (i != j && m[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int m[100][100];

    read(m, n);
    display(m, n);

    int row;
    printf("Enter the row for which you want to calculate the total: ");
    scanf("%d", &row);

    if (row >= 0 && row < n) {
        int total = row_total(m, n, row);
        printf("Total of row %d: %d\n", row, total);
    } else {
        printf("Invalid row number.\n");
    }

    if (is_identity(m, n)) {
        printf("The entered matrix is an identity matrix.\n");
    } else {
        printf("The entered matrix is not an identity matrix.\n");
    }

    return 0;
}
