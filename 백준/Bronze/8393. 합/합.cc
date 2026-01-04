#include <iostream>
using namespace std;
int main() {
    int N = 0;
    int answer = 0;
    cin >> N;
    for(int i = N; i > 0; --i)
        answer += i;
    cout << answer;
}