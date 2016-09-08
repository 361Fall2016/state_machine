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
//**** add names, assignment name, etc per syllabus****
int
main ()
{
  printStateName();
  event new_event;
  char key;
 
  // need switch statement that sets the key entered to the correct event
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
} 



