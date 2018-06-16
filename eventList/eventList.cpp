//
// Created by tsvetina on 14.06.18.
//

#include "eventList.h"
#include <sstream>





void EventList::ReadAllEvents() const{
    if(list.empty()){
        std::cout << "No created events yet!" << std::endl;
    }
    else {
        for (int i = 0; i < list.size(); i++) {
            list[i].printEvent();
        }
    }
    addToFile();
}

void EventList::DeleteEvent(const std::string &name) {
    bool isFound = false;
    for (int i = 0; i < list.size() && !isFound; i++) {
        if (list[i].getName() == name) {
            list.erase(list.begin() + i);
            addToFile();
            isFound = true;

        }
    }
    if (!isFound){
        std::cout << "Event not found!" << std::endl;
    }
}

void EventList::NewEvent(const Event& event) {
    list.push_back(event);
    addToFile();
}

void EventList::updateEvent(const Event &newEvent,const std::string &name) {

    bool isFound = false;
    for (int i = 0; i < list.size() && !isFound; i++) {
        if (list[i].getName() == name) {
            list[i] = newEvent;
             isFound = true;
             addToFile();
        }
    }
    if (!isFound){
        std::cout << "Event not found!" << std::endl;
    }

}

EventList::EventList(const std::string& file) {
    this->file = file;
}

void EventList::addToFile() const {
    std::ofstream out(file);
    for (int i = 0; i < list.size() ; i++){
        list[i].printEvent(out);
    }
    out.close();
}



