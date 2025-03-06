#include <iostream>

using namespace std;

int main() {
    int N = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    int array[N];
    
    for (int i = 0; i < N; ++i)
        cin >> array[i];
    
    int min = array[0], max = array[0];
    
    for (int i = 0; i < N; ++i) {
        if(array[i] < min)
            min = array[i];
        if(array[i] > max)
            max = array[i];
    }
    cout << min << ' ' << max << '\n';
    return 0;
}