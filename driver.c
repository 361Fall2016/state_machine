//-----------------------------------------------------------------------------------
// Assignment : Lab-02 OpeningSource
// Date       : 09/11/2016
//
// Author     : Holly Davies davieshf@dukes.jmu.edu, Justin Hux huxdr@dukes.jmu.edu
//
// File Name  : driver.c
// ---------------------------------------------------------------------------------- 

#include <stdio.h>
#include <stdlib.h>
#include "hardware.h"
#include "statemodel.h"

int
main ()
{

  printStateName();  // to print initial state
  event new_event;   // event type variable to hold new event
  char key;          // variable to hold input
 
  // continually get key from input, switch on key, call appropriate event handler
  while ((key = getchar()) != 'x') { 
	 new_event = INVALID_EVENT;
 	 switch(key)
 	 {
 	     case 'c':
 	       new_event = CLOSE_BUTTON_PRESSED;
 	       break;
 	     case 'C':
 	       new_event = CLOSED_DETECTED;
 	       break;
 	     case 'o':
 	       new_event = OPEN_BUTTON_PRESSED;
 	       break;
 	     case 'O':
 	       new_event = OPENED_DETECTED;
 	       break;
 	 }
 	 if (new_event != INVALID_EVENT){ 
 		handle_event(new_event);
	 }
   }
  exit(0);
} 



