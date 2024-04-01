#include "dayType.h"
#include <iostream>

const std::string dayType::validDays[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

dayType::dayType() {
    currentDay = "Sunday"; // Default constructor initializes to Sunday
}

dayType::dayType(const std::string& day) {
    currentDay = day;
}

void dayType::print() const {
    std::cout << currentDay;
}

std::string dayType::getDay() const {
    return currentDay;
}

std::string dayType::getNextDay() const {
    int nextIndex = (getDayIndex() + 1) % 7;
    return validDays[nextIndex];
}

std::string dayType::getPreviousDay() const {
    int prevIndex = (getDayIndex() + 6) % 7;
    return validDays[prevIndex];
}

void dayType::addDays(int numDays) {
    int newIndex = (getDayIndex() + numDays) % 7;
    currentDay = validDays[newIndex];
}

int dayType::getDayIndex() const {
    for (int i = 0; i < 7; ++i) {
        if (currentDay == validDays[i]) {
            return i;
        }
    }
    return -1; // Invalid day
}
