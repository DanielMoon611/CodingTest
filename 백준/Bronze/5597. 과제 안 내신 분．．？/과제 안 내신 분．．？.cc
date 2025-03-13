#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    vector<int> students(30, 0);
    int input = 0;
    
    for (int i = 0; i < 28; ++i) {
        cin >> input;
        students[input - 1] = 1;
    }
    
    for (int j = 0; j < students.size(); ++j)
        if (students[j] == 0)
            cout << j + 1 << endl;

    return 0;
}