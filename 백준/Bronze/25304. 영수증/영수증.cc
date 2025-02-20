#include <iostream>

using namespace std;

int main() {
    int X = 0;
    int N = 0;
    int i = 0;
    int answer = 0;
    cin >> X;
    cin >> N;
    while (true) {
        if (i >= N)
            break;
        int a, b = 0;
        scanf("%d %d", &a, &b);
        answer += a * b;
        ++i;
    }
    if (answer == X)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}