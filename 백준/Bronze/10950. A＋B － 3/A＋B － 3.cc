#include <iostream>

using namespace std;

int main() {
    int T = 0;
    int i = 0;
    cin >> T;
    while (true) {
        if (i > T - 1)
            break;
        int A = 0;
        int B = 0;
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
        ++i;
    }
    return 0;
}