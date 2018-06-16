//
// Created by tsvetina on 15.06.18.
//

#ifndef INTERVIEW2_DATE_H
#define INTERVIEW2_DATE_H

#include <sstream>
#include <iostream>

class Date {
private:
    std::string date;
public:
    Date();
    Date(std::string date);
    bool isLeap(short year) const;
    bool isValidDate() const;
    bool operator>(const Date& secondDate) const;
    bool operator==(const Date& secondDate) const;
    bool operator>=(const Date& secondDate) const;
    friend std::ostream &operator<<(std::ostream& os, const Date& theDate);

};


#endif //INTERVIEW2_DATE_H
