#include <stdio.h>

int main(void) {
    int N = 0;
    scanf("%d", &N);
    N /= 4;
    for(int i = 0; i < N; ++i)
        printf("%s ", "long");
    printf("%s\n", "int");
    return 0;
}