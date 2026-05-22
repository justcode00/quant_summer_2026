#include <iostream>
#include <string>

// Pass-by-value: Creates a copy. Original variable won't change.
void modifyValue(int num) {
    num = 100; 
}

// Pass-by-reference: Modifies the actual original variable.
void modifyReference(int &num) {
    num = 100; 
}

int main() {
    // 1. Strings and Standard I/O
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! Welcome to Day 1.\n";

    // 2. Reference Testing
    int original = 20;
    
    modifyValue(original);
    std::cout << "After modifyValue: " << original << "\n"; // Will still be 20

    modifyReference(original);
    std::cout << "After modifyReference: " << original << "\n"; // Will change to 100

    return 0;
}