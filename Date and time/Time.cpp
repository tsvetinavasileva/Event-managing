//
// Created by tsvetina on 15.06.18.
//

#include "Time.h"
#include <sstream>


Time::Time() {
    time = "00:00";
}

Time::Time(std::string time) {
    this->time = time;
}

bool Time::isValidTime() const {
    std::istringstream is(time);
    char colon;
    short hours,minutes;
    is >> hours >> colon >> minutes;
    return hours <= 60 && hours >= 0 && minutes <= 60 && minutes >= 0;
}

bool Time::operator>(const Time & secondTime) const {
    std::istringstream is(time);
    char colon;
    short firstHour,firstMin;
    is >> firstHour >> colon >> firstMin;
    std::istringstream ss(secondTime.time);
    short secondHour, secondMin;
    ss >> secondHour >> colon >> secondMin;
    if (firstHour > secondHour) {
        return true;
    }
    return firstMin > secondMin;
}


std::ostream &operator<<(std::ostream &os,const Time &theTime) {
    os << theTime.time ;
    return os;
}


