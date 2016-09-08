//-----------------------------------------------------------------------------------
// Assignment : Lab-02 OpeningSource
// Date       : 09/11/2016
//
// Author     : Holly Davies davieshf@dukes.jmu.edu, Justin Hux huxdr@dukes.jmu.edu
//
// File Name  : opening.c
// ---------------------------------------------------------------------------------- 

#include "opening.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the opening state.
state_t opening = {
    close_button,            // close_button_pressed
    default_event_handler,   // closed_detected
    default_event_handler,   // open_button_pressed
    open_detected,           // opened_detected
    entry_to_opening,        // entry_to
    //exit_from_opening        // exit_from
};

state_t* open_detected()
{
  set_motor(MOTOR_OFF);
  return &opened;
}

void entry_to_opening()
{
  set_motor(MOTOR_OPENING);
}

state_t* close_button()
{
  return &closing;
}
