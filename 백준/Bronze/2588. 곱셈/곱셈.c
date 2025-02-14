#include <stdio.h>

int main(void) {
    int A = 0;
    int B = 0;
    scanf("%d %d", &A, &B);
    printf("%d\n", ((B % 100) % 10) * A);
    printf("%d\n", ((B % 100) / 10) * A);
    printf("%d\n", (B / 100) * A);
    printf("%d\n", (((B % 100) % 10) * A + (((B % 100) / 10) * A * 10) + ((B / 100) * A * 100)));
    return 0;
}