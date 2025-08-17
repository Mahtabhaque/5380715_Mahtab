#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int ch = getchar();
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    size_t len = strlen(s);
    if (len && s[len - 1] == '\n') s[--len] = '\0';
    if (scanf("%d", &k) != 1) return 0;

    k %= 26;
    for (size_t i = 0; i < len; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            s[i] = (char)('a' + (c - 'a' + k) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            s[i] = (char)('A' + (c - 'A' + k) % 26);
        }
    }
    printf("%s\n", s);
    return 0;
}
