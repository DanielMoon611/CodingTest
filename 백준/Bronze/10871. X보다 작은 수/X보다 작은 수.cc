#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int X = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> X;
    int arr[10000] = {0};
    for(int i = 0; i < N; ++i)
        cin >> arr[i];
    for(int i = 0; i < N; ++i)
        if(arr[i] < X)
            cout << arr[i] << " ";
    cout << '\n';
    return 0;
}