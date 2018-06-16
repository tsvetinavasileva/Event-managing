//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_COMMAND_H
#define INTERVIEW2_COMMAND_H
#include "../eventList/eventList.h"

class Command {
public:
    virtual void execute(EventList& list) = 0;
};


#endif //INTERVIEW2_COMMAND_H
