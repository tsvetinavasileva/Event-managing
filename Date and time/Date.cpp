//
// Created by tsvetina on 16.06.18.
//

#include "Date.h"
#include <sstream>


Date::Date() {
    date = "01.01.2018";
}

Date::Date(std::string date){
    this->date = date;
}


bool Date::isLeap(short year) const{
    return (((year % 4 == 0) &&
             (year % 100 != 0)) ||
            (year % 400 == 0));
}



bool Date::isValidDate() const {
    std::istringstream is(date);
    char dot;
    short day,month,year;
    is >> day >> dot >> month >> dot  >> year;
    if(year < 2018)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (month == 2)
    {
        if (isLeap(year))
            return (day <= 29);
        else
            return (day <= 28);
    }
    if (month == 4 || month == 6 ||
        month == 9 || month == 11)
        return (day <= 30);

    return true;
}


bool Date::operator==(const Date &secondDate) const {
    return this->date == secondDate.date;
}


bool Date::operator>(const Date &secondDate) const {
    std::istringstream is(date);
    char colon;
    short firstDay,firstMonth,firstYear;
    is >> firstDay >> colon >> firstMonth >> colon  >> firstYear;
    std::istringstream ss(secondDate.date);
    short secondDay, secondMonth,secondYear;
    ss >> secondDay >> colon >> secondMonth >> colon >> secondYear;
    if (firstYear > secondYear) {
        return true;
    }
    if (firstMonth > secondMonth) {
        return true;
    }
    return firstDay > secondDay;
}

std::ostream &operator<<(std::ostream &os, const Date &theDate) {
        os << theDate.date;
        return os;

}

bool Date::operator>=(const Date &secondDate) const {
    return this->date > secondDate.date || this->date == secondDate.date;
}


