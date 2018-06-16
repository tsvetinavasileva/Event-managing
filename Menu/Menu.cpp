//
// Created by tsvetina on 15.06.18.
//
#include <iostream>
#include <sstream>
#include "Menu.h"
#include "../Commands/command.h"
#include "../Commands/readAllEvents.h"
#include "../Commands/newEvent.h"
#include "../Commands/updateEvent.h"
#include "../Commands/deleteEvent.h"

void Menu::storeFile(){
    std::string file;
    std::cout << "Enter file name for storing events:\n";
    std::getline(std::cin, file);
    if (file.empty()) {
        file = "default";
    }
}

void Menu::run() {

    EventList list("input");

    while(true) {
        std::cout << "1.Print all events." << std::endl;
        std::cout << "2.Create a new event." << std::endl;
        std::cout << "3.Update an existing event." << std::endl;
        std::cout << "4.Delete an existing event." << std::endl;
        std::cout << "5.Quit." << std::endl;
        short input;
        std::cin >> input;
        Command *command;
        switch (input) {

            case 1:
                command = new ReadAllEvents;
                break;
            case 2:
                command = new NewEvent;
                break;
            case 3:
                command = new updateEvent;
                break;
            case 4:
                command = new DeleteEvent;
                break;
            case 5:
                return;
            default:
                std::cout << "Input is not from 1 to 5!\n";
                continue;
        }
        std::cin.ignore();
        command->execute(list);

        }
}


