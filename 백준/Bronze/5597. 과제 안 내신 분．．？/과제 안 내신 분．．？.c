#include <stdio.h>

int main(void) {
    int students[30] = {0};
    int input = 0;
    
    for (int i = 0; i < 28; ++i) {
        scanf("%d", &input);
        students[input - 1] = input;
    }
    
    for (int j = 0; j < sizeof(students) / 4; ++j)
        if (students[j] != j + 1)
            printf("%d\n", j + 1);
}