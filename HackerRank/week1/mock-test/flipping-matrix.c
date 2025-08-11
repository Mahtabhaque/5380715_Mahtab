#include <stdio.h>

int flippingMatrix(int n, int matrix[256][256]) {
    int size = 2 * n, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = matrix[i][j];
            int b = matrix[i][size - 1 - j];
            int c = matrix[size - 1 - i][j];
            int d = matrix[size - 1 - i][size - 1 - j];
            int max = a;
            if (b > max) max = b;
            if (c > max) max = c;
            if (d > max) max = d;
            sum += max;
        }
    }
    return sum;
}

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int n;
        scanf("%d", &n);
        int matrix[256][256];
        for (int i = 0; i < 2 * n; i++)
            for (int j = 0; j < 2 * n; j++)
                scanf("%d", &matrix[i][j]);
        printf("%d\n", flippingMatrix(n, matrix));
    }
    return 0;
}
