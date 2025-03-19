#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    double num1 = *(double *)a;
    double num2 = *(double *)b;
    return (num1 > num2) - (num1 < num2);
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    double *score = (double *)malloc(N * sizeof(double));

    for (int i = 0; i < N; ++i)
        scanf("%lf", &score[i]);

    qsort(score, N, sizeof(double), compare);

    double sum = 0;
    double max_score = score[N - 1];

    for (int j = 0; j < N; ++j)
        sum += ((score[j] / max_score) * 100);

    printf("%lf\n", sum / N);

    free(score);
    return 0;
}