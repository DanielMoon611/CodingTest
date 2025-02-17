#include <stdio.h>

int main(void) {
    int H = 0;
    int M = 0;
    int C = 0;
    int result = 0;
    scanf("%d %d %d", &H, &M, &C);
    if(H == M && M == C)
        result = 10000 + H * 1000;
    else if(H == M || H == C)
        result = 1000 + H * 100;
    else if(M == C)
        result = 1000 + M * 100;
    else
        result = ((H > M ? H : M) > C ? (H > M ? H : M) : C) * 100;
    printf("%d\n", result);
    return 0;
}