#include <iostream>
using namespace std;
int main() {
    int H = 0;
    int M = 0;
    cin >> H >> M;
    if(M >= 45)
        M -= 45;
    else {
        if(H == 0)
            H = H - 1 +24;
        else
            H -= 1;
        M = M -45 + 60;
    }
    cout << H << " " << M << endl;
}