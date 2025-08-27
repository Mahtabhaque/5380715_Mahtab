#include <stdio.h>
#include <string.h>

#define MAX 205

int r, c, n;
char grid[MAX][MAX];
char full[MAX][MAX];
char temp[MAX][MAX];

void makeFullGrid() {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            full[i][j] = 'O';
        }
        full[i][c] = '\0';
    }
}

void explode(char src[MAX][MAX], char dst[MAX][MAX]) {
    makeFullGrid();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            dst[i][j] = full[i][j];
        }
        dst[i][c] = '\0';
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (src[i][j] == 'O') {
                dst[i][j] = '.';
                if (i > 0) dst[i - 1][j] = '.';
                if (i < r - 1) dst[i + 1][j] = '.';
                if (j > 0) dst[i][j - 1] = '.';
                if (j < c - 1) dst[i][j + 1] = '.';
            }
        }
    }
}

int main() {
    scanf("%d %d %d", &r, &c, &n);
    for (int i = 0; i < r; i++) {
        scanf("%s", grid[i]);
    }

    if (n == 1) {
        for (int i = 0; i < r; i++) printf("%s\n", grid[i]);
        return 0;
    }

    if (n % 2 == 0) {
        makeFullGrid();
        for (int i = 0; i < r; i++) printf("%s\n", full[i]);
        return 0;
    }

    char first[MAX][MAX], second[MAX][MAX];
    explode(grid, first);
    explode(first, second);

    if (n % 4 == 3) {
        for (int i = 0; i < r; i++) printf("%s\n", first[i]);
    } else {
        for (int i = 0; i < r; i++) printf("%s\n", second[i]);
    }
    return 0;
}
