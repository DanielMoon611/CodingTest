#include <iostream>
using namespace std;
int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    int result = 0;
    cin >> A >> B >> C;
    if(A == B && B == C)
        result = 10000 + A * 1000;
    else if(A == B || A == C)
        result = 1000 + A * 100;
    else if(B == C)
        result = 1000 + B * 100;
    else
        result = ((A > B ? A : B) > C ? (A > B ? A : B) : C) * 100;
    cout << result << endl;
}