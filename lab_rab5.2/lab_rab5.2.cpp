#include "weapon2.cpp"
#include "Magic_weapon2.cpp"
#include "Disposable_weapons.cpp"
#include "Disposable_weapons.h"

bool flag = false;
int main()
{
	setlocale(LC_ALL, "Rus");
	Magic_weapon goblin_sword("Goblin sword", 40, 28, Type_weapon::TWOHANDED, 15);
	goblin_sword.attack();
	cout << "\n\n";

	Disposable_weapons stick("stick", 2, 1, Type_weapon::ONEHANDED);
	stick.attack();
	stick.attack();
	cout << "\n\n";

	Arm<typename string> Tolya;
	Tolya.setLeft_arm("Огнестрельное"); Tolya.setRight_arm("Вайбовое");
	Arm<typename int> h;
	h.setLeft_arm(112233); h.setRight_arm(665544);
	cout << "В левой руке - " << Tolya.getLeft_arm() << endl << "В правой руке - " << Tolya.getRight_arm() << endl;
	cout << "*****************************************\n";
	cout << "В левой руке - " << h.getLeft_arm() << endl << "В правой руке - " << h.getRight_arm() << endl;

}
