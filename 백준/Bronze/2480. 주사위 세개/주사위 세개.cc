#include <iostream>

using namespace std;

int main() {
    int H = 0;
    int M = 0;
    int C = 0;
    int result = 0;
    cin >> H >> M >> C;
    if(H == M && M == C)
        result = 10000 + H * 1000;
    else if(H == M || H == C)
        result = 1000 + H * 100;
    else if(M == C)
        result = 1000 + M * 100;
    else
        result = ((H > M ? H : M) > C ? (H > M ? H : M) : C) * 100;
    cout << result << endl;
    return 0;
}