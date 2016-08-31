#include <stdio.h>
#include <string>
#include <iostream>

class Arme
{
public:
    Arme(int mt, int hit, int crt, int rng, int wt):mt(mt), hit(hit), crt(crt), rng(rng), wt(wt){
    }
    int get_mt(){return mt;}
    int get_hit(){return hit;}
    int get_crt(){return crt;}
    int get_rng(){return rng;}
    int get_wt(){return wt;}

    private:
        int mt, hit, crt, rng, wt;
};

class Sword:public Arme
{
public:
    Sword():Arme(5, 90, 0, 1, 5){name="Iron Sword";}
    std::string get_name(){return name;}

private:
    std::string name;
};

class Lance:public Arme
{
public:
    Lance():Arme(7, 80, 0, 1, 8){name="Iron Lance";}
    std::string get_name(){return name;}

private:
    std::string name;
};

class Axe:public Arme
{
public:
    Axe():Arme(8, 75, 0, 1, 10){name="Iron Axe";}
    std::string get_name(){return name;}

private:
    std::string name;
};

class Bow:public Arme
{
public:
    Bow():Arme(6, 85, 0, 2, 5){name="Iron Bow";}
    std::string get_name(){return name;}

private:
    std::string name;
};

class Anima:public Arme
{
public:
    Anima():Arme(5, 90, 0, 1-2, 4){name="Fire";}
    std::string get_name(){return name;}

private:
    std::string name;
};
