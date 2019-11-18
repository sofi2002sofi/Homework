#include <iostream>
#include "stadion.h"
#include "stadion_method.cpp"
using namespace std;

int main()
{
    Stadion Stade_de_France(81000, "Stade_de_France", 2000, 1998, 8925, 30, "France");
    Stadion Arena_Lviv(35000, "Arena_Lviv", 1800, 2011, 7140, 8, "Ukraine");
    Stadion Camp_Nou(99000, "Camp_Nou", 2100, 1957, 7140, 48, "Spain");

    Stade_de_France.getInfo(Stade_de_France);
    cout << endl;
    Arena_Lviv.getInfo(Arena_Lviv);
    cout << endl;
    Camp_Nou.getInfo(Camp_Nou);
    cout << endl;

    return 0;
}