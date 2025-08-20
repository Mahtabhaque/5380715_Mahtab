#include <stdio.h>

const char* balancedSums(int arr[], int n) {
    long long total = 0, left = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) return "YES";
        left += arr[i];
    }
    return "NO";
}

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("%s\n", balancedSums(arr, n));
    }
    return 0;
}
