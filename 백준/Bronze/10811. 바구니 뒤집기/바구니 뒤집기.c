#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int arr[N];
    for (int x = 0; x < N; ++x)
        arr[x] = x + 1;
    
    for (int y = 0; y < M; ++y) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--;
        j--;
        while(i < j) {
            int tmp = arr[i];
            arr[i++] = arr[j];
            arr[j--] = tmp;
        }
    }
    
    for(int z = 0; z < N; ++z)
        printf("%d ", arr[z]);
    
    return 0;
}