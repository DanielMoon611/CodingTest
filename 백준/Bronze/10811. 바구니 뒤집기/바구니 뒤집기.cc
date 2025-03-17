#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> arr(N);
    for(int x = 0; x < N; ++x)
        arr[x] = x + 1;
    
    for(int y = 0; y < M; ++y) {
        int i, j;
        cin >> i >> j;
        i--;
        j--;
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    for(int z : arr)
        cout << z << " ";
    
    return 0;
}