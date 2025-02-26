#include <iostream>

// Function to compute factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;

    // Prompt user for input
    std::cout << "Please enter an integer value: ";
    std::cin >> N;

    // Validate input
    if (N < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "The value you entered is " << N << " and its factorial is " << factorial(N) << std::endl;
    }

    return 0;
}

