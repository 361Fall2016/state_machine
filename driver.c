#include <stdio.h>
#include <stdlib.h>
#include "hardware.h"
#include "statemodel.h"
// add names, assignment name,
int
main ()
{
  printStateName();
  //repeatedly get a char from the stdin and call the handle_event func
  // that needs to be passed into the handle_event func
  event new_event;
  char key;
  // use while loop that states that while key != x then switch on the  
 
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

/* current state should be opened, then when you type o or C etc, then the program should react. */
/*
print in the order of:
exit
action
new
entry

*/


