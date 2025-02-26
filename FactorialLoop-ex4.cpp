#include <iostream>

// Function to compute factorial
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Loop iteration: " << i << " - " << i << "! = " << factorial(i) << std::endl;
    }
    return 0;
}

