#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int primary_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][n - 1 - i];
    }

    int difference = abs(primary_sum - secondary_sum);
    printf("%d\n", difference);

    return 0;
}
