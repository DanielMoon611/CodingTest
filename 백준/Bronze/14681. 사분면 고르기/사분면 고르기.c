#include <stdio.h>

int main(void) {
    int X = 0;
    int Y = 0;
    scanf("%d\n%d", &X, &Y);
    if(X > 0) {
        if(Y > 0)
            printf("1");
        else
            printf("4");
    } else {
        if(Y > 0)
            printf("2");
        else
            printf("3");
    }
    return 0;
}