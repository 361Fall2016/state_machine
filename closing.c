//-----------------------------------------------------------------------------------
// Assignment : Lab-02 OpeningSource
// Date       : 09/11/2016
//
// Author     : Holly Davies davieshf@dukes.jmu.edu, Justin Hux huxdr@dukes.jmu.edu
//
// File Name  : closing.c
// ---------------------------------------------------------------------------------- 

#ifndef closing_c
#define closing_c

#include "closing.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closing state.
state_t closing = {
    default_event_handler,   // close_button_pressed
    close_detected,          // closed_detected
    open_button,             // open_button_pressed
    default_event_handler,   // opened_detected
    entry_to_closing,        // entry_to
    exit_from_closing, 	     // exit_from
};

// call the close detected handler, set motor action, and return address of closed state
state_t* close_detected ()
{
  set_motor(MOTOR_OFF);  
  return &closed;
}

// set action to enter closing state
void entry_to_closing()
{ 
  set_motor(MOTOR_CLOSING);
}

// call the open button handler, exit from closing state and return address of opening state
state_t* open_button()
{
  exit_from_closing();
  return &opening;
}

void exit_from_closing()
{
}
#endif
