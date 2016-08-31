#include "Personnage.h"
#include "Arme.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Soldier U1;
    Mercenary U2;
    Knight U3;
    Fighter U4;
    Archer U5;
    Cavalier U6;
    Mage U7;
    Sword W1;

    cout << U1.get_hp() << ", " << U1.get_str() << ", " << U1.get_skl() << ", " << U1.get_spd() << ", " << U1.get_lck() << ", " << U1.get_def() << ", " << U1.get_res() << ", " << U1.get_mov() << ", " << U1.get_con() << endl;
    cout << U2.get_hp() << ", " << U2.get_str() << ", " << U2.get_skl() << ", " << U2.get_spd() << ", " << U2.get_lck() << ", " << U2.get_def() << ", " << U2.get_res() << ", " << U2.get_mov() << ", " << U2.get_con() << endl;
    cout << W1.get_name() << ", " << W1.get_mt() << ", " << W1.get_hit() << ", " << W1.get_crt() << ", " << W1.get_rng() << ", " << W1.get_wt() << endl;


}
