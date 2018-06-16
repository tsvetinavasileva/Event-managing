//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_UPDATEEVENT_H
#define INTERVIEW2_UPDATEEVENT_H


#include "command.h"

class updateEvent: public Command {
    void execute(EventList& list) override;
};


#endif //INTERVIEW2_UPDATEEVENT_H
