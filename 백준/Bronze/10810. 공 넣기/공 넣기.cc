#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N, 0);
    for (int index = 0; index < M; ++index) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int x = i - 1; x < j; ++x)
            arr[x] = k;
    }
    for (const auto& num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}