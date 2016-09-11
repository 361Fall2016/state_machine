//-----------------------------------------------------------------------------------
// Assignment : Lab-02 OpeningSource
// Date       : 09/11/2016
//
// Author     : Holly Davies davieshf@dukes.jmu.edu, Justin Hux huxdr@dukes.jmu.edu
//
// File Name  : opening.h
// ---------------------------------------------------------------------------------- 

#ifndef opening_h
#define opening_h

#include "state.h"

// Declare all of the functions performed 
// when in the opening state.
static state_t*  open_detected();
static state_t*  close_button();
static void      entry_to_opening();
static void      exit_from_opening();

#endif



