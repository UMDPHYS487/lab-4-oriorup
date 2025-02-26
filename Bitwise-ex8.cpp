#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> b{0b01110010};
    std::cout << b << " (initial value)\n";

    // Flip all bits
    b = ~b;

    std::cout << b << " (flipped value)\n";

    return 0;
}

