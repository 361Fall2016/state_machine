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
  //  exit_from_closing        // exit_from
};

state_t* close_detected ()
{
  set_motor(MOTOR_OFF);  
  return &closed;
}

void entry_to_closing()
{ 
  set_motor(MOTOR_CLOSING);
}

state_t* open_button()
{
  return &opening;
}

#endif
