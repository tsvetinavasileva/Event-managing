cmake_minimum_required(VERSION 3.9)
project(interview2)

set(CMAKE_CXX_STANDARD 14)

add_executable(interview2 main.cpp Commands/command.h Commands/readAllEvents.cpp Commands/readAllEvents.h Commands/newEvent.cpp Commands/newEvent.h Commands/deleteEvent.cpp Commands/deleteEvent.h Commands/updateEvent.cpp Commands/updateEvent.h Event/Event.cpp Event/Event.h eventList/eventList.cpp eventList/eventList.h Menu/Menu.cpp Menu/Menu.h "Date and time/Date.h" "Date and time/Time.cpp" "Date and time/Time.h" "Date and time/Date.cpp")