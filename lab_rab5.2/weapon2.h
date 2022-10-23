#pragma once
#include <iostream>
#include <string>
#define MAX_WEIGHT 70
using namespace std;


struct Player
{
    int id;
    string login, password;
    void printPlayer();
};


enum class Type_weapon
{
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};

class Weapon
{
    friend class Characteristic;
public:
    Weapon(string name_weapon, int damage_weapon, int weight_weapon, Type_weapon type_weapon);
    Weapon();
    ~Weapon();

    bool selectWeight();
    int sumWeight(Weapon* w);
    int sumWeight(int weight);
    virtual int get_Damage();
    int get_Weight();
    string get_Name();
    Type_weapon getType_weapon();

    void set_Damage(int damage_weapon);

    bool operator > (Weapon& w);
    bool operator < (Weapon& w);

    virtual void attack() = 0;

protected:
    int damage_weapon, weight_weapon;
    string name_weapon;
    Type_weapon type_weapon;
};


class Characteristic
{
public:
    Characteristic(int power);
    int power;
    int GetDamage(Weapon* w);
};

