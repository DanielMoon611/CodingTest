#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, M = 0;
    scanf("%d %d", &N, &M);
    int* arr = (int*)calloc(N, sizeof(int));
    int i, j, k, index = 0;
    while (index < M) {
        scanf("%d %d %d", &i, &j, &k);
        for(int x = i - 1; x < j; ++x)
			arr[x] = k;
		index++;
    }
    for (int a = 0; a < N; ++a)
        printf("%d ", arr[a]);
    free(arr);
    return 0;
}