#include <stdio.h>

int main(void) {
    int N = 0;
    scanf("%d", &N);
    int nums[100] = {0};
    int v = 0;
    int count = 0;
    for (int i = 0; i < N; ++i)
        scanf("%d", &nums[i]);
    scanf("%d", &v);
    for (int i = 0; i < N; ++i)
        if (nums[i] == v)
            count++;
    printf("%d\n", count);
    return 0;
}