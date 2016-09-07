#include <stdio.h>
#include <string>
#include <iostream>



class Character
{
public :

    Character(int hp, int skl, int spd, int lck, int def, int res, int mov, int con):hp(hp), skl(skl), spd(spd), lck(lck), def(def), res(res), mov(mov), con(con){
    }
    int get_hp(){return hp;}
    int get_skl(){return skl;}
    int get_spd(){return spd;}
    int get_lck(){return lck;}
    int get_def(){return def;}
    int get_res(){return res;}
    int get_mov(){return mov;}
    int get_con(){return con;}

private :

    int hp, skl, spd, lck, def, res, mov, con;

};

class Soldier:public Character
{
public:
    Soldier():Character(20, 0, 1, 0, 0, 0, 6, 5){str=3;}
    int get_str(){return str;}

private:
    int str;
};

class Mercenary:public Character
{
public:
    Mercenary():Character(18, 8, 8, 0, 4, 0, 5, 9){str=4;}
    int get_str(){return str;}
private:
    int str;
};

class Knight:public Character
{
public:
    Knight():Character(17, 2, 0, 0, 9, 0, 4, 13){str=5;}
    int get_str(){return str;}
private:
    int str;
};

class Fighter:public Character
{
public:
    Fighter():Character(20, 2, 4, 0, 2, 0, 5, 11){str=5;}
    int get_str(){return str;}
private:
    int str;
};

class Archer:public Character
{
public:
    Archer():Character(18, 3, 3, 0, 3, 0, 5, 7){str=4;}
    int get_str(){return str;}
private:
    int str;
};

class Cavalier:public Character
{
public:
    Cavalier():Character(20, 2, 5, 0, 6, 0, 7, 9){str=5;}
    int get_str(){return str;}
private:
    int str;
};

class Mage:public Character
{
public:
    Mage():Character(16, 2, 3, 0, 3, 3, 5, 5){mag=1;}
    int get_mag(){return mag;}
private:
    int mag;
};
