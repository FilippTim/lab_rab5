#pragma once
#include "weapon2.h"
class Disposable_weapons : public Weapon
{
public:
	Disposable_weapons(string name_weapon, int damage_weapon, int weight_weapon, Type_weapon type_weapon);
	Disposable_weapons();
	void attack() override;

	bool flag;
};

template <typename T>
class Arm 
{
public:
	Arm(){};
	T getLeft_arm() { return left_arm; };
	T getRight_arm() { return right_arm; };
	void setLeft_arm(T left_arm) { this->left_arm = left_arm; }
	void setRight_arm(T right_arm) { this->right_arm = right_arm; }

private:
	T left_arm;
	T right_arm;
};


