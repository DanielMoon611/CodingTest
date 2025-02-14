#include <iostream>

using namespace std;

int main() {
    int X = 0;
    int Y = 0;
    cin >> X >> Y;
    if(X > 0) {
        if(Y > 0)
            cout << "1" << endl;
        else
            cout << "4" << endl;
    } else {
        if(Y > 0)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}