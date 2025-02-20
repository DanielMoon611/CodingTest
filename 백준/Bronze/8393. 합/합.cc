#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int answer = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        answer += i;
    }
    printf("%d\n", answer);
    return 0;
}