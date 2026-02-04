#include <iostream>
using namespace std;
int main() {
    int T = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    for(int i = 0; i < T; ++i) {
        int A, B = 0;
        cin >> A >> B;
        cout << A + B << '\n';
    }
}