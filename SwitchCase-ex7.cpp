#include <iostream>

int main() {
    int num;
    
    // Prompt user for input
    std::cout << "Please enter a number: ";
    std::cin >> num;

    // Determine behavior based on number properties
    switch (num) {
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            std::cout << "The number squared is: " << num * num << std::endl;
            break;
        default:
            if (num % 2 == 1) {  // Check if the number is odd
                std::cout << "The number divided by 2 is: " << num / 2.0 << std::endl;
            } else {
                std::cout << "hahaha" << std::endl;
            }
            break;
    }

    return 0;
}
