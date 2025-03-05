#include <stdio.h>

int main() {
   int N = 0;
   int X = 0;
   scanf("%d %d", &N, &X);
   int arr[10000] = {0};
   for(int i = 0; i < N; ++i)
      scanf("%d", &arr[i]);
   for(int i = 0; i < N; ++i)
      if(arr[i] < X)
         printf("%d ", arr[i]);
   printf("\n");
   return 0;
}