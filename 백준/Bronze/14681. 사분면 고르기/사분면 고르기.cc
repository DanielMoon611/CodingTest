#include <iostream>
using namespace std;
int main() {
    int X = 0;
    int Y = 0;
    cin >> X >> Y;
    if(X > 0) {
        if(Y > 0)
            cout << "1";
        else
            cout << "4";
    } else {
        if(Y > 0)
            cout << "2";
        else
            cout << "3";
    }
}