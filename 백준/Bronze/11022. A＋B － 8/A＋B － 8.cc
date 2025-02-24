#include <iostream>

using namespace std;

int main() {
    int T = 0;
    int i = 1;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    while (true) {
        if (i > T)
            break;
        int a, b = 0;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
        ++i;
    }
    return 0;
}