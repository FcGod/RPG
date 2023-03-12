#pragma once
#include <string_view>
//Screen modifiers

void clear_screen(char fill = ' ');


//Takes input from user, default range: 1 to 6
//Takes InputMessage STR, min INT, max INT
int takeChoice(std::string_view choiceMessage = "Enter your choice: ", int minInputVal = 1, int maxInputVal = 6);

