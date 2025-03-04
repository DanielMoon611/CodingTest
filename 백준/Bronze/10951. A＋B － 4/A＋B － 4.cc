#include <iostream>

using namespace std;

int main() {
    int a, b = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (!(cin >> a >> b).eof())
        cout << a + b << '\n';
    return 0;
}