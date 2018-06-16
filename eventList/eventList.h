//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_EVENTLIST_H
#define INTERVIEW2_EVENTLIST_H
#include <vector>
#include <iostream>
#include <fstream>
#include "../Event/Event.h"

class EventList {
private:
    std::vector <Event> list;
    std::string file;
    void addToFile() const;
public:
    EventList(const std::string& file);
    void ReadAllEvents() const;
    void DeleteEvent(const std::string &name);
    void NewEvent(const Event& event);
    void updateEvent(const Event &newEvent,const std::string &name);

};


#endif //INTERVIEW2_EVENTLIST_H
