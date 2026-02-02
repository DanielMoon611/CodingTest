#include <stdio.h>

int main(void) {
    int X = 0;
    int N = 0;
    int result = 0;
    scanf("%d\n%d", &X, &N);
    for(int i = 0; i < N; ++i) {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        result += a * b;
    }
    if(X == result)
        printf("Yes");
    else
        printf("No");
    return 0;
}