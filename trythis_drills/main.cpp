// read and write first name

#include <iostream>

int main() {
    std::cout << "Please enter your first name and age (followed by 'enter'): \n";
    std::string firstName;
    double age;
    std::cin >> firstName >> age;
    int ageInMonths = age * 12;
    std::cout << "Hello " << firstName << "(age in months: " << ageInMonths << ")!" << std::endl;

    return 0;
}