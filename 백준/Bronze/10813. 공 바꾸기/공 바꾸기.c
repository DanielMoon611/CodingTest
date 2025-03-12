#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	int N, M = 0;
	scanf("%d %d", &N, &M);
	int* arr = (int*)calloc(N, sizeof(int));
	for (int x = 0; x < N; ++x)
		arr[x] = x + 1;
	for (int y = 0; y < M; ++y) {
		int i, j = 0;
		scanf("%d %d", &i, &j);
		int tmp = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = tmp;
	}
	for (int z = 0; z < N; ++z)
		printf("%d ", arr[z]);
	printf("\n");
	free(arr);
	return 0;
}