#pragma once
#include "phone.h"
#include "player.h" 

class ipad final : public player, phone
{
public:
    ipad(int memory, int display);

    void Show() override;
};