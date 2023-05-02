#include "player.h"

player::player(int memory) : _memory(memory)
{
}

void player::Show() { cout << "Размер памяти " << _memory << endl; }

Ipod::Ipod(int memory, int button) : player(memory), _button(button)
{
}

void Ipod::Show()
{
    cout << " Ipod, количество кнопок " << _button << " Размер памяти " << _memory << endl;
}

mp3::mp3(int memory, string shape) : player(memory), _shape(shape)
{
}

void mp3::Show()
{
    cout << " mp3, геометрическая фигура : " << _shape << " Размер памяти " << _memory << endl;
}