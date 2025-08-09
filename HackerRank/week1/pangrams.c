#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int letters[26] = {0};
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            letters[tolower(s[i]) - 'a'] = 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            printf("not pangram");
            return 0;
        }
    }
    printf("pangram");
    return 0;
}
