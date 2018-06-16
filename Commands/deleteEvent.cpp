//
// Created by tsvetina on 14.06.18.
//

#include "deleteEvent.h"

void DeleteEvent::execute(EventList &list) {
    std::string name;
    std::cout << "Enter event name: " <<std::endl;
    std::getline(std::cin, name);
    list.DeleteEvent(name);
}

