#include <iostream>

int main() {
    int factorial = 1; // Initialize factorial

    for (int i = 1; i <= 10; ++i) {
        factorial *= i; // Compute factorial iteratively
        std::cout << "Loop iteration: " << i << " - " << i << "! = " << factorial << std::endl;
    }

    return 0;
}
