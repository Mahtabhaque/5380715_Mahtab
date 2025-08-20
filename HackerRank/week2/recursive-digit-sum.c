#include <stdio.h>
#include <string.h>

long long digitSum(const char *n) {
    long long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

long long superDigitCalc(long long x) {
    if (x < 10) return x;
    long long s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return superDigitCalc(s);
}

int main() {
    char n[1000005];
    long long k;
    scanf("%s %lld", n, &k);
    long long initial = digitSum(n) * k;
    printf("%lld\n", superDigitCalc(initial));
    return 0;
}
