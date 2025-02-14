#include <iostream>

using namespace std;

int main() {
    int H = 0;
    int M = 0;
    int C = 0;
    
    cin >> H >> M >> C;
    M += C;
    
    if(M >= 60) {
        H += M / 60;
        if(H >= 24)
            H -= 24;
        M = M % 60;
    }
    cout << H << " " << M << endl;
    return 0;
}