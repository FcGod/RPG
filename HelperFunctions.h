#pragma once
#include "HelperFunctions.h"

//Screen modifiers

void clear_screen(char fill = ' ');


//Takes input from user, default range: 1 to 6
//Takes InputMessage STR, min INT, max INT
double takeChoice(std::string_view choiceMessage = "Enter your choice: ");