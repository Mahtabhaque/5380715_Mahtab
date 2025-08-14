#include <stdio.h>

int sockMerchant(int n, int ar[]) {
    int pairs = 0;
    int visited[101] = {0};
    for (int i = 0; i < n; i++) {
        visited[ar[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        pairs += visited[i] / 2;
    }
    return pairs;
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("%d\n", sockMerchant(n, ar));
    return 0;
}
