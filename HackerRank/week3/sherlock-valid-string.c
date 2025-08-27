#include <stdio.h>
#include <string.h>

char* isValid(char* s) {
    int freq[26] = {0}, n = strlen(s);
    for (int i = 0; i < n; i++) freq[s[i] - 'a']++;

    int counts[26], csize = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) counts[csize++] = freq[i];
    }

    int min = counts[0], max = counts[0];
    for (int i = 1; i < csize; i++) {
        if (counts[i] < min) min = counts[i];
        if (counts[i] > max) max = counts[i];
    }

    if (min == max) return "YES";

    int minCount = 0, maxCount = 0, others = 0;
    for (int i = 0; i < csize; i++) {
        if (counts[i] == min) minCount++;
        else if (counts[i] == max) maxCount++;
        else others++;
    }

    if (others > 0) return "NO";
    if (min == 1 && minCount == 1) return "YES";
    if (max - min == 1 && maxCount == 1) return "YES";
    return "NO";
}

int main() {
    char s[100005];
    scanf("%s", s);
    printf("%s\n", isValid(s));
    return 0;
}
