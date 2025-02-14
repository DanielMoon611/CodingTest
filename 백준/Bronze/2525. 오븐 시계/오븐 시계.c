#include <stdio.h>

int main(void) {
    int H = 0;
    int M = 0;
    int C = 0;
    scanf("%d %d", &H, &M);
    scanf("%d", &C);
    
    M += C;
    
    if(M >= 60) {
        H += M / 60;
        if(H >= 24)
            H -= 24;
        M = M % 60;
    }
    
    printf("%d %d\n", H, M);
    return 0;
}