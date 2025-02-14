#include <stdio.h>

int main(void) {
    int H = 0;
    int M = 0;
    scanf("%d %d", &H, &M);
    if(M >= 45)
        M -= 45;
    else {
        if(H == 0)
            H = H - 1 + 24;
        else
            H -= 1;
        M = M - 45 + 60;
    }
    printf("%d %d\n", H, M);
    return 0;
}