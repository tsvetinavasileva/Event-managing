//
// Created by tsvetina on 14.06.18.
//

#include "newEvent.h"

void NewEvent::execute(EventList& list) {
    Event event;
    std::cout << "Input the data for the new event: \n";
    std::cin >> event;
    list.NewEvent(event);
}
