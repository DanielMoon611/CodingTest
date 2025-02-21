#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int T = 0;
    int i = 1;
    scanf("%d", &T);
    while (true) {
        if (i > T)
            break;
        int a, b = 0;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
        ++i;
    }
    return 0;
}