#include <stdio.h>

int isPowerOfTwo(unsigned long long n) {
    return (n && !(n & (n - 1)));
}

unsigned long long largestPowerOfTwo(unsigned long long n) {
    unsigned long long p = 1ULL << 63;
    while (p > n) p >>= 1;
    return p;
}

const char* counterGame(unsigned long long n) {
    int moves = 0;
    while (n > 1) {
        if (isPowerOfTwo(n)) n >>= 1;
        else n -= largestPowerOfTwo(n);
        moves++;
    }
    return (moves % 2 == 1) ? "Louise" : "Richard";
}

int main() {
    int t;
    unsigned long long n;
    scanf("%d", &t);
    while (t--) {
        scanf("%llu", &n);
        printf("%s\n", counterGame(n));
    }
    return 0;
}
