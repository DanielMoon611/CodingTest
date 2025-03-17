#include <iostream>
#include <vector>

int main() {
    std::vector<bool> arr(42, false);
    int num, result = 0;

    for (int i = 0; i < 10; i++) {
        std::cin >> num;
        int temp = num % 42;

        if (!arr[temp]) {
            arr[temp] = true;
            result++;
        }
    }

    std::cout << result << std::endl;
    return 0;
}