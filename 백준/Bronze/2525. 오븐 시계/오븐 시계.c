#include <stdio.h>

int main(void) {
    int A = 0;
    int B = 0;
    int C = 0;
    
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    
    B += C;
    
    if(B >= 60) {
        A += B / 60;
        if(A >= 24)
            A -= 24;
        B = B % 60;
    }
    
    printf("%d %d\n", A, B);
    return 0;
}