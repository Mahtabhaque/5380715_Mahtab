#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpChar(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char grid[n][105];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
            qsort(grid[i], strlen(grid[i]), sizeof(char), cmpChar);
        }

        int ok = 1;
        for (int col = 0; col < n && ok; col++) {
            for (int row = 0; row < n - 1; row++) {
                if (grid[row][col] > grid[row + 1][col]) {
                    ok = 0;
                    break;
                }
            }
        }

        if (ok) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
