#include <stdio.h>

int main() {
    int l, n, i;
    scanf("%d", &l);
    scanf("%d", &n);
    int w[n], h[n];
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &w[i], &h[i]);
    }
    for (i = 1; i <= n; i++) {
        if ((w[i] < l) || (h[i] < l))
            printf("UPLOAD ANOTHER\n");
        else {
            if (w[i] == h[i])
                printf("ACCEPTED\n");
            else
                printf("CROP IT\n");
        }
    }
    return 0;
}
