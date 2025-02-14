#include <iostream>

using namespace std;

int main() {
    int A = 0;
    int B = 0;
    cin >> A >> B;
    cout << ((B % 100) % 10) * A << endl;
    cout << ((B % 100) / 10) * A << endl;
    cout << (B / 100) * A << endl;
    cout << (((B % 100) % 10) * A + (((B % 100) / 10) * A * 10) + ((B / 100) * A * 100)) << endl;
    return 0;
}