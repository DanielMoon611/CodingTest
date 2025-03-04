#include <stdio.h>
#include <stdbool.h>

int main(void) {
    while (true) {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            break;
        printf("%d\n", a + b);
    }
    return 0;
}