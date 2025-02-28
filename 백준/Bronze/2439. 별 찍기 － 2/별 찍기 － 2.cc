#include <iostream>

using namespace std;

int main() {
    int N = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            if (i + j >= N - 1)
                cout << "*";
            else
                cout << " ";
        cout << '\n';
    }
    return 0;
}