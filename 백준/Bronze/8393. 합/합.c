#include <stdio.h>

int main(void) {
    int n = 0;
    int answer = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        answer += i;
    }
    printf("%d\n", answer);
    return 0;
}