#include <iostream>
#include "dayType.h"

int main() {
    dayType day1; // Default constructor
    std::cout << "1. Default day: ";
    day1.print(); // Expected output: "Sunday"

    std::cout << "\n2. Previous day: ";
    std::cout << day1.getPreviousDay(); // Expected output: "Saturday"

    std::cout << "\n3. Next day: ";
    std::cout << day1.getNextDay(); // Expected output: "Monday"

    dayType day2("Monday"); // Constructor with parameters
    std::cout << "\n4. Initialized day: ";
    day2.print(); // Expected output: "Monday"

    std::cout << "\n5. Current day: " << day2.getDay(); // Expected output: "Monday"

    day2.addDays(3);
    std::cout << "\n6. New day after adding 3 days: ";
    day2.print(); // Expected output: "Thursday"

    day2.addDays(30);
    std::cout << "\n7. New day after adding 30 days: ";
    day2.print(); // Expected output: "Saturday"

    day2.addDays(365);
    std::cout << "\n8. New day after adding 365 days: ";
    day2.print(); // Expected output: "Sunday"

    return 0;
}