#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len = 0;
    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        } else {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}
