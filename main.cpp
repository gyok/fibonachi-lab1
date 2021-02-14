#include <iostream>

int fibonachi(int n) {
    int prev = 1;
    int curr = 1;
    int buff = 0;

    for (int i = 2; i < n; i++) {
        buff = curr;
        curr += prev;
        prev = buff;
    }

    return curr;
}

int main() {
    int n;
    std::cout << "Type in num of fibonachi num" << std::endl;
    std::cin >> n;
    std::cout << fibonachi(n) << std::endl;

    return 0;
}
