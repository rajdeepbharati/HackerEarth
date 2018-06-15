#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, sum = 0;
    char s[10000];
    scanf("%s", &s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            sum += s[i] - 48;
        }
    }
    printf("%d", sum);
    return 0;
}
