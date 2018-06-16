//
// Created by tsvetina on 14.06.18.
//

#include "updateEvent.h"

void updateEvent::execute(EventList& list) {
    std::string eventName;
    Event updated;
    std::cout << "Enter the name of the event you want to update:" << std::endl;
    std::getline(std::cin, eventName);
    std::cin >> updated;
    list.updateEvent(updated,eventName);
}




