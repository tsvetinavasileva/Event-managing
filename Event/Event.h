//
// Created by tsvetina on 14.06.18.
//
#include <iostream>
#include <cstring>
#include "../Date and time/Date.h"
#include "../Date and time/Time.h"

#ifndef INTERVIEW2_EVENT_H
#define INTERVIEW2_EVENT_H


class Event  {
private:
    std::string name;
    std::string location;
    Date startDate;
    Time startTime;
    Date endDate;
    Time endTime;

public:
    Event();
    void printEvent(std::ostream& os = std::cout) const;
    bool operator==(const Event& other) const ;
    friend std::istream& operator>>(std::istream& is, Event& event);
    const std::string &getName() const;
};


#endif //INTERVIEW2_EVENT_H
