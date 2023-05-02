#include "ipad.h"

ipad::ipad(int memory, int display) : phone(display), player(memory)
{
}

void ipad::Show()
{
    cout << "ipad размер памяти " << _memory << " размер дисплея " << _display << endl;
}