#include <iostream>

bool is_leap_year(unsigned int Y) {
    return (Y % 4 == 0) && (Y % 100 != 0 || Y % 400 == 0);
}

int main() {
    unsigned int Y; 
    
    std::cout << "Enter a year: ";
    std::cin >> Y;

    if (is_leap_year(Y)) {
        std::cout << "True. \n";
    } else {
        std::cout << "False. \n";
    }

    return 0;
}
