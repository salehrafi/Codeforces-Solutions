#include <iostream>

int main() {
    long long result = 1;
    int exponent;
    std::cin >> exponent;

    for (int i = 0; i < exponent; ++i) {
        result *= 2;
    }
    std::cout << result << std::endl;
    return 0;
}
