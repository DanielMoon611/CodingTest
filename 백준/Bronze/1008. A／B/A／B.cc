#include <iostream>
using namespace std;
int main() {
    double num1 = 0.0;
    double num2 = 0.0;
    cin >> num1 >> num2;
    cout.precision(15);
    cout << fixed;
    cout << num1 / num2;
}