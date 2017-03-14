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
	blood = 'h';
	vegRatio = 0;
	meatRatio = 0;
	ani_id = '?';
	color = RED;
	m = 0;
	n = 0;
	habitat = LANDANIMAL;
	wild=1;
}

Animal::Animal(Species _species, string _name, double _weight, Sex _sex, int _heartChamber, char _blood, double _vegRatio, double _meatRatio, char _id, Color _color, int _m, int _n, Habitat _habitat, int _wild)
{
	species = _species;
	name = _name;
	weight = _weight;
	sex = _sex;
	heartChamber = _heartChamber;
	blood = _blood;
	vegRatio = _vegRatio;
	meatRatio = _meatRatio;
	ani_id = _id;
	color = _color;
	m = _m;
	n = _n;
	habitat = _habitat;
	wild=_wild;
}

Animal::Animal(const Animal& A)
{
	species = A.species;
	name = A.name;
	weight = A.weight;
	sex = A.sex;
	heartChamber = A.heartChamber;
	blood = A.blood;
	vegRatio = A.vegRatio;
	meatRatio = A.meatRatio;
	ani_id = A.ani_id;
	color = A.color;
	m = A.m;
	n = A.n;
	habitat = A.habitat;
	wild=A.wild;
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
	blood = A.blood;
	vegRatio = A.vegRatio;
	meatRatio = A.meatRatio;
	ani_id = A.ani_id;
	color = A.color;
	m = A.m;
	n = A.n;
	habitat = A.habitat;
	wild=A.wild;
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

void Animal::setSpecies(Species _s)
{
	species = _s;
}
Species Animal::getSpecies()
{
	return species;
}

istream& operator>>(istream& in, Animal& a)
{
	string s,name;
	double weight;
	string gender;
	Sex sex;
	int hc;
	char blood;
	double vr, mr;
	char id;
	Color color;
	int m;
	int n;
	string hab;
	Habitat habitat;

	in >> s >> name >> weight >> gender >> hc >> blood >> vr >> mr >> id >> m >> n >> hab;
	if (gender == "FEMALE")
	{
		sex = FEMALE;
	}
	else
	{
		sex = MALE;
	}
	
	if (hab == "WATERANIMAL")
	{
		color = CYAN;
		habitat = WATERANIMAL;
	}
	else if (hab == "FLYINGANIMAL")
	{
		color = RED;
		habitat = FLYINGANIMAL;
	}
	else if (hab == "AMPHIBIAN")
	{
		color = GREEN;
		habitat = AMPHIBIAN;
	}
	else
	{
		color = YELLOW;
		habitat = LANDANIMAL;
	}
	
	if (s == "ELEPHANT")
	{
		a = Animal (ELEPHANT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}	
	else if (s == "GIRAFFE")
	{
		a = Animal(GIRAFFE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "LION")
	{
		a = Animal(LION, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "TIGER")
	{
		a = Animal(TIGER, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "ORANGUTAN")
	{
		a = Animal(ORANGUTAN, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
	}	
	else if (s == "CHIMPANZEE")
	{
		a = Animal(CHIMPANZEE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "KOMODO")
	{
		a = Animal(KOMODO, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "BEAR")
	{
		a = Animal(BEAR, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "WHALE")
	{
		a = Animal(WHALE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "DOLPHIN")
	{
		a = Animal(DOLPHIN, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "CLOWNFISH")
	{
		a = Animal(CLOWNFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "BLUETANG")
	{
		a = Animal(BLUETANG, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "PIRANHA")
	{
		a = Animal(PIRANHA, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "PUFFFISH")
	{
		a = Animal(PUFFFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "EAGLE")
	{
		a = Animal(EAGLE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "CENDRAWASIH")
	{
		a = Animal(CENDRAWASIH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "OWL")
	{
		a = Animal(OWL, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "BAT")
	{
		a = Animal(BAT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "MACAU")
	{
		a = Animal(MACAU, name, weight, sex, hc,blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "COCKATOO")
	{
		a = Animal(COCKATOO, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "FROG")
	{
		a = Animal(FROG, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "ALLIGATOR")
	{
		a = Animal(ALLIGATOR, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}
	else if (s == "HIPPOPOTAMUS")
	{	
		a = Animal(HIPPOPOTAMUS, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,1);
	}
	else if (s == "TURTLE")
	{
		a = Animal(TURTLE, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
	}
}

double Animal::getWeight()
{
	return weight;
}

double Animal::getVegRatio()
{
	return vegRatio;
}

double Animal::getMeatRatio()
{
	return meatRatio;
}

char Animal::getId()
{
	return ani_id;
}

Color Animal::getColor()
{
	return color;
}

int Animal::getM()
{
	return m;
}

int Animal::getN()
{
	return n;
}	
char Animal::getHabitat()
{
	if (habitat == LANDANIMAL)
		return 'X';
	else if (habitat == FLYINGANIMAL)
		return 'O';
	else if (habitat == WATERANIMAL)
		return '#';
	else if (habitat == AMPHIBIAN)
		return 'Q';
}

int Animal::getWild()
{
	return wild;
}

double Animal::ConsumedMeat()
{
	return (meatRatio*weight);
}
double Animal::ConsumedVeg()
{
	return (vegRatio*weight);
}
