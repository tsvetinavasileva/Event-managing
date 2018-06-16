//
// Created by tsvetina on 15.06.18.
//

#ifndef INTERVIEW2_TIME_H
#define INTERVIEW2_TIME_H


#include <iostream>

class Time {
private:
    std::string time;
public:
    Time();
    Time(std::string time);
    bool isValidTime() const;
    bool operator>(const Time& secondTime) const;
    friend std::ostream& operator<<(std::ostream& os, const Time& theTime);

};


#endif //INTERVIEW2_TIME_H
