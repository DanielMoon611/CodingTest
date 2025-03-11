#include <iostream>

using namespace std;

int main(void) {
    int arr[9] = {0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int index = 0;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
        if(max < arr[i]) {
            max = arr[i];
            index = i + 1;
        }
    }
    cout << max << '\n';
    cout << index << '\n';
    return 0;
}