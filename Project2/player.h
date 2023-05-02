#pragma once
#include "Elka.h"

class player : virtual public Elka
{
public:
    player(int memory);
    void Show() override;

protected:
    int _memory;
};

class Ipod final : public player
{
public:
    Ipod(int memory, int button);
    void Show() override;

private:
    int _button;
};

class mp3 final : public player
{
public:
    mp3(int memory, string shape);
    void Show() override;

private:
    string _shape;
};