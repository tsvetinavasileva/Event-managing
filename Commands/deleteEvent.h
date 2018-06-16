//
// Created by tsvetina on 14.06.18.
//

#ifndef INTERVIEW2_DELETEEVENT_H
#define INTERVIEW2_DELETEEVENT_H


#include "command.h"

class DeleteEvent : public Command{
public:
    void execute(EventList &list) override;
};


#endif //INTERVIEW2_DELETEEVENT_H
