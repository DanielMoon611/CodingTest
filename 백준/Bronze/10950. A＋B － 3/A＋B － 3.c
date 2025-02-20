#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int T = 0;
    int i = 1;
    scanf("%d", &T);
    while (true) {
        if (i > T)
            break;
        int A = 0;
        int B = 0;
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
        ++i;
    }
    return 0;
}