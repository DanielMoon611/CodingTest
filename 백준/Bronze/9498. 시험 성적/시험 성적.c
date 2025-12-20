#include <stdio.h>

int main(void) {
    int score = 0;
    scanf("%d", &score);
    if(score >= 90)
        printf("A");
    else if(90 > score && score >= 80)
        printf("B");
    else if(80 > score && score >= 70)
        printf("C");
    else if(70 > score && score >= 60)
        printf("D");
    else
        printf("F");
    return 0;
}