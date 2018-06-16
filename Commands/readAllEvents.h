//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_READALLEVENTS_H
#define INTERVIEW2_READALLEVENTS_H


#include "command.h"
#include "../eventList/eventList.h"


class ReadAllEvents : public Command {
    void execute(EventList& list) override;
};


#endif //INTERVIEW2_READALLEVENTS_H
