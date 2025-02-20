#include <stdio.h>

int main(void) {
    int X = 0;
    int N = 0;
    int answer = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        answer += a * b;
    }
    if(answer == X)
        printf("%s\n", "Yes");
    else
        printf("%s\n", "No");
    return 0;
}