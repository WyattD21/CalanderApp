#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
    static const std::string validDays[7];
    std::string currentDay;

    int getDayIndex() const;

public:
    dayType();
    dayType(const std::string& day);
    void print() const;
    std::string getDay() const;
    std::string getNextDay() const;
    std::string getPreviousDay() const;
    void addDays(int numDays);
};

#endif // DAYTYPE_H
