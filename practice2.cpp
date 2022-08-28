#include <iostream>

int doubled(int i);

int main() {
    int yourNumber;
    std::cout << "Enter a random number" << std::endl;
    std::cin >> yourNumber;

    std::cout << "Your number times two is: " << doubled(yourNumber) << std::endl;
}

int doubled(int i) {
    int n = i * 2;
    return n;
}