#include <iostream>

using namespace std;

int main() {
    int N = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    int nums[100] = {0};
    int v = 0;
    int count = 0;
    for (int i = 0; i < N; ++i)
        cin >> nums[i];
    cin >> v;
    for (int i = 0; i < N; ++i)
        if (nums[i] == v)
            count++;
    cout << count << '\n';
    return 0;
}