//
// Created by tsvetina on 14.06.18.
//

#include "Event.h"


void Event::printEvent(std::ostream& os) const {
    os << "Name: " << name << " Location: " << location
              << " Start date: " << startDate << " Start time: " << startTime << " End date: "
              << endDate << " End time: " << endTime << std::endl;
}

bool Event::operator==(const Event &other) const {
    return name == other.name;
}

std::istream& operator>>(std::istream& is, Event &event) {
    std::cout << "Enter name:  " << std::endl;
    std::getline(is, event.name);
    std::cout << "Enter location: " << std::endl;
    std::getline(is, event.location);
    std::string sDate;
    std::string sTime;
    std::string eDate;
    std::string eTime;
        bool validate;
        do {
            std::cout << "Enter event starting date in format xx.xx.xxxx" << std::endl;
            std::getline(is, sDate);
            std::cout << "Enter event starting time in format xx:xx" << std::endl;
            std::getline(is, sTime);
            std::cout << "Enter event ending date in format xx.xx.xxxx" << std::endl;
            std::getline(is, eDate);
            std::cout << "Enter event ending time in format xx.xx" << std::endl;
            std::getline(is, eTime);
            Date startDate(sDate);
            Time startTime(sTime);
            Date endDate(eDate);
            Time endTime(eTime);
            validate = startDate.isValidDate() && endDate.isValidDate()
            && startTime.isValidTime() && endTime.isValidTime() && endDate >= startDate;
            if(startDate > endDate){
                std::cout << "Ending event precedes starting event" << std::endl;
            }
            if (startDate == endDate){
              if(startTime > endTime){
                    std::cout << "Ending event precedes starting event" << std::endl;
                    validate = false;
              }
            }

            if (!startDate.isValidDate()) {
                std::cout << "Invalid start date." << std::endl;
            }
            if (!startTime.isValidTime()) {
                std::cout << "Invalid start time." << std::endl;
            }
            if (!endDate.isValidDate()) {
                std::cout << "Invalid start date." << std::endl;
            }
            if (!endTime.isValidTime()) {
                std::cout << "Invalid end time." << std::endl;
            }
            if (!validate) {
                std::cout << "Try again!" << std::endl;
            }
        }while(!validate);

        event.startDate = sDate;
        event.startTime = sTime;
        event.endDate = eDate;
        event.endTime = eTime;

        return is;

}

Event::Event() {
    name = "";
    location = "";
}

const std::string &Event::getName() const {
    return name;
}
