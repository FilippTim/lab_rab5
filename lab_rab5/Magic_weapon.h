#pragma once
#include "weapon.h"
class Magic_weapon : public Weapon
{
public:
	Magic_weapon(string name_weapon, int damage_weapon, int weight_weapon, Type_weapon type_weapon, int magic_damage);
	Magic_weapon();

	int getMagic_damage();
	int get_Damage() override;

private:
	int magic_damage;
};

