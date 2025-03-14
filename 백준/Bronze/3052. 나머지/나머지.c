#include <stdio.h>
#include <stdbool.h>

int main() {
    bool arr[42] = { false };
    int num, result = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        int temp = num % 42;
        
        if (!arr[temp]) {
            arr[temp] = true;
            result++;
        }
    }

    printf("%d\n", result);
    return 0;
}