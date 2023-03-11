#define NOMINMAX //windows.h redefines max() and breaks it.
#include <Windows.h>
#include <string_view>
#include <iostream>
#include <cstdint>
#include <limits>



//Screen modifiers
void clear_screen(char fill = ' ') {
    COORD tl = { 0,0 };
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}

//Input sanitizer
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double takeChoice(std::string_view choiceMessage)
{
    std::cout << choiceMessage;
    double x{};
    std::cin >> x;
    while (!std::cin)
    {
        std::cout << "Failed to understand your choice, try again: ";
        std::cin.clear();
        ignoreLine();
        std::cin >> x;
    }
    ignoreLine();
    return x;
}