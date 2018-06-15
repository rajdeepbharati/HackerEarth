#include <stdio.h>

int main() {
    int t, a, k, n, i;
    scanf("%d", &t);
    int sum[t];
    for (i = 1; i <= t; i++) {
        scanf("%d %d %d", &a, &k, &n);
        sum[i] = a + (k * (n - 1));
    }

    for (i = 1; i <= t; i++) {
        printf("%d\n", sum[i]);
    }
    return 0;
}
