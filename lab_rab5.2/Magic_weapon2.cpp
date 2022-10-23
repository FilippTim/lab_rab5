#include "Magic_weapon2.h"

inline Magic_weapon::Magic_weapon(string name_weapon, int damage_weapon, int weight_weapon, Type_weapon type_weapon, int magic_damage) :Weapon(name_weapon, damage_weapon, weight_weapon, type_weapon) {
	this->magic_damage = magic_damage;
};
inline Magic_weapon::Magic_weapon() : Magic_weapon("Magic weapon not selected", 0, 0, Type_weapon::ONEHANDED, 0) {};

inline int Magic_weapon::getMagic_damage() { return magic_damage; }
inline int Magic_weapon::get_Damage() { /*Weapon::get_Damage(); */return Weapon::get_Damage() + magic_damage; }

inline void Magic_weapon::attack() { cout << "Attack with magic weapons\n"; }
