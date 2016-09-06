#include "closing.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closing state.
state_t closing = {
    default_event_handler,   // close_button_pressed
    close_detected,          // closed_detected
    default_event_handler,   // open_button_pressed
    default_event_handler,   // opened_detected
    entry_to_closing,        // entry_to
    default_event_handler    // exit_from
};

state_t* close_detected ()
{
  exit_from_closing();
  return &closed;
}

void entry_to_closing()
{ 
  set_motor(MOTOR_CLOSING);
}

state_t* open_button()
{
  exit_from_closing();
  return &opening;
}

