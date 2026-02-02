#include <iostream>
using namespace std;
int main() {
    int X = 0;
    int N = 0;
    int result = 0;
    cin >> X >> N;
    for(int i = 0; i < N; ++i) {
        int a, b = 0;
        cin >> a >> b;
        result += a * b;
    }
    if(X == result)
        cout << "Yes";
    else
        cout << "No";
}