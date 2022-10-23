#include "Disposable_weapons.h"

inline Disposable_weapons::Disposable_weapons(string name_weapon, int damage_weapon, int weight_weapon, Type_weapon type_weapon) : Weapon(name_weapon, damage_weapon, weight_weapon, type_weapon) {}
inline Disposable_weapons::Disposable_weapons() : Weapon("Weapon not selected", 0, 0, Type_weapon::ONEHANDED) {}

inline void Disposable_weapons::attack() {
	if (flag == true) cout << "Оружие уже было использовано\n";
	else {
		cout << "Атакуем одноразовым оружием\n";
		flag = true;
	}

}

