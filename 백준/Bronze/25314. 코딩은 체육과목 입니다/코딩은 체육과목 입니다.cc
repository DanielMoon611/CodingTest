#include <iostream>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    N /= 4;
    for(int i = 0; i < N; ++i)
        cout << "long ";
    cout << "int" << endl;
}