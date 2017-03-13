/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */
#include "Animal.h"
#include <iostream>
using namespace std;

	Animal::Animal()
	{
		species = NONE;
		name = "\0";
		weight = 0;
		sex = MALE;
		heartChamber = 0;
		vegRatio = 0;
		meatRatio = 0;
		id = '?';
		color = RED;
		m = 0;
		n = 0;
		habitat = LANDHABITAT;
	}
	
	Animal::Animal(Species _species, string _name, double _weight, Sex _sex, int _heartChamber, double _vegRatio, double _meatRatio, char _id, Color _color, int _m, int _n, Habitat _habitat)
	{
		species = _species;
		name = _name;
		weight = _weight;
		sex = _sex;
		heartChamber = _heartChamber;
		vegRatio = _vegRatio;
		meatRatio = _meatRatio;
		id = _id;
		color = _color;
		m = _m;
		n = _n;
		habitat = _habitat;
	}

	Animal::Animal(const Animal& A)
	{
		species = A.species;
		name = A.name;
		weight = A.weight;
		sex = A.sex;
		heartChamber = A.heartChamber;
		vegRatio = A.vegRatio;
		meatRatio = A.meatRatio;
		id = A.id;
		color = A.color;
		m = A.m;
		n = A.n;
		habitat = A.habitat;
	}

	Animal::~Animal()
	{
	}

	Animal& Animal::operator=(const Animal& A)
	{
		species = A.species;
		name = A.name;
		weight = A.weight;
		sex = A.sex;
		heartChamber = A.heartChamber;
		vegRatio = A.vegRatio;
		meatRatio = A.meatRatio;
		id = A.id;
		color = A.color;
		m = A.m;
		n = A.n;
		habitat = A.habitat;
	}

	void Animal::interact()
	{
		if (species == ELEPHANT)
		{
			cout<< "This elephant is trumpeting!!" << endl;
		}
		else if (species == GIRAFFE)
		{
			cout<< "This girrafe is eating high tree leaves" << endl;
		}
		else if (species == LION)
		{
			cout<< "Roarrrr..!!" << endl;
		}
		else if (species == TIGER)
		{
			cout<< "Grrrr...!! Grrr...!!" << endl;
		}
		else if (species == ORANGUTAN)
		{
			cout<< "This orangutan is playing on a tree!" << endl;
		}
		else if (species == CHIMPANZEE)
		{
			cout<< "U u a a ... U u a a" << endl;
		}
		else if (species == KOMODO)
		{
			cout<< "So amazing komodo!!" << endl;
		}
		else if (species == BEAR)
		{
			cout<< "Growl.. Growl.." << endl;
		}
		else if (species == WHALE)
		{
			cout<< "This whale created a huge splash!" << endl;
		}
		else if (species == DOLPHIN)
		{
			cout << "This dolphin loves to jump!" << endl;	
		}
		else if (species == CLOWNFISH)
		{
			cout << "This clownfish lives among the anemone" << endl;
		}
		else if (species == BLUETANG)
		{
			cout << "This blue tang just keeps swimmming!" << endl;
		}
		else if (species == PIRANHA)
		{
			cout << "This piranha eats voraciously!" << endl;
		}
		else if (species == PUFFFISH)
		{
			cout << "This puff fish is fat!"<< endl;
		}
		else if (species == EAGLE)
		{
			cout << "This eagle is soaring in the sky!" << endl;
		}
		else if (species == CENDRAWASIH)
		{
			cout << "This cendrawasih is resting gracefully!"<< endl;
		}
		else if (species == OWL)
		{
			cout << "Hooo... Hooo..." << endl;}
		else if (species == BAT)
		{
			cout << "This bat is sleeping upside down!" << endl;
		}
		else if (species == MACAU)
		{
			cout << "This macau is very pretty!" << endl;
		}
		else if (species == COCKATOO)
		{
			cout << "This cockatoo is repeating what you're saying!" << endl;
		}
		else if (species == FROG)
		{
			cout<< "Croag.... Croag.... Ribbet... Ribbet..." << endl;
		}
		else if (species == ALLIGATOR)
		{
			cout<< "Hiss....." << endl;
		}
		else if (species == HIPPOPOTAMUS)
		{
			cout<< "This hippo is so big" << endl;
		}
		else if (species == TURTLE)
		{
			cout<< "This turtle is walking slowly" << endl;
		}
	}
