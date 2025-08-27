#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    int m;
    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    // compress ranks (dense ranking)
    int scores[n], size = 0;
    scores[size++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i-1]) scores[size++] = ranked[i];
    }

    int pos = size - 1;
    for (int i = 0; i < m; i++) {
        while (pos >= 0 && player[i] >= scores[pos]) pos--;
        printf("%d\n", pos + 2);
    }
    return 0;
}
