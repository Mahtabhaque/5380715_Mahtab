#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    unsigned int n;
    for (int i = 0; i < q; i++) {
        scanf("%u", &n);
        unsigned int result = ~n; 
        printf("%u\n", result);
    }

    return 0;
}
