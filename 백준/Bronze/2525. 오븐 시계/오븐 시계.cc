#include <iostream>
using namespace std;
int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    
    cin >> A >> B >> C;
    
    B += C;
    
    if(B >= 60) {
        A += B / 60;
        if(A >= 24)
            A -= 24;
        B = B % 60;
    }
    cout << A << " " << B << endl;
}