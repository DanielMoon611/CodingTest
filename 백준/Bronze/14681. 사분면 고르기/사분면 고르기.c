#include <stdio.h>

int main(void) {
    int X = 0;
    int Y = 0;
    scanf("%d\n%d", &X, &Y);
    if(X > 0) {
        if(Y > 0)
            printf("1\n");
        else
            printf("4\n");
    } else {
        if(Y > 0)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}