//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_NEWEVENT_H
#define INTERVIEW2_NEWEVENT_H


#include "command.h"
#include "../Event/Event.h"
#include "../eventList/eventList.h"

class NewEvent : public Command {
public:
    void execute(EventList& list) override;

};

#endif //INTERVIEW2_NEWEVENT_H
