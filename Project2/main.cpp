#include "player.h"
#include "phone.h"
#include "ipad.h"

int main()
{
    Elka* grocery[5];

    grocery[0] = new iphone(
        6, string("Space Gray"));
    grocery[1] = new samsung(7, 2);
    grocery[2] = new Ipod(8, 1);
    grocery[3] = new mp3(16, string("квадрат"));
    grocery[4] = new ipad(7, 21);

    bool open = true;
    while (open)
    {
        cout << "Выберите устройство : 1 - iphone, 2 - samsung, 3 - Ipod, 4 - mp3, 5 - ipad, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            grocery[0]->Show();
            break;

        case 2:
            grocery[1]->Show();
            break;

        case 3:
            grocery[2]->Show();
            break;

        case 4:
            grocery[3]->Show();
            break;

        case 5:
            grocery[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Давай сначала" << endl;
            break;
        }
    }

    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];

    return 0;
}