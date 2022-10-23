#include "weapon.cpp"
#include "Magic_weapon.cpp"

int main()
{
	setlocale(LC_ALL, "Rus");
	Weapon Gun;
	if (Gun.getType_weapon() == Type_weapon::ONEHANDED) cout << "Одноручное оружие\n";
	cout << endl << endl;

	Player Tolya;
	Tolya.id = 0;
	Tolya.login = "Tapir";
	Tolya.password = "Tapir_password";
	Tolya.printPlayer();
	cout << endl << endl;

	Magic_weapon w1;
	Weapon Knife("Knife", 20, 2, Type_weapon::ONEHANDED);
	Magic_weapon goblin_sword("Goblin sword", 40, 28, Type_weapon::TWOHANDED, 15);
	cout << w1.get_Name() << ": " << endl << "\t" << "Magic damage: " << w1.getMagic_damage() << endl << "**********" << endl;
	cout << goblin_sword.get_Name() << ": " << endl << "\t" << "Magic damage: " << goblin_sword.getMagic_damage() << endl << "**********" << endl;
	cout << endl << endl;

	cout <<"Domage goblin_sword: " << goblin_sword.get_Damage() << endl;
	cout << endl << endl;

	cout <<"Oprearator > overload test: " << endl;
	if (Knife > goblin_sword) cout << "\t Damage Knife > Damage goblin_sword\n";
	else cout << "\tDamage goblin_sword > Damage Knife\n";
	cout << "Oprearator < overload test: " << endl;
	if (Knife < goblin_sword) cout << " \tDamage Knife < Damage goblin_sword\n";
	else cout << "\tDamage goblin_sword < Damage Knife\n";
	cout << endl << endl;

}

