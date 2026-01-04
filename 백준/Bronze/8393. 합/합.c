#include <stdio.h>

int main(void) {
    int N = 0;
    int answer = 0;
    scanf("%d", &N);
    for(int i = N; i > 0; --i)
        answer += i;
    printf("%d\n", answer);
    return 0;
}