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
		id = '?';
		color = RED;
		m = 0;
		n = 0;
		habitat = LANDANIMAL;
	}
	
	Animal::Animal(Species _species, string _name, double _weight, Sex _sex, int _heartChamber, char _blood, double _vegRatio, double _meatRatio, char _id, Color _color, int _m, int _n, Habitat _habitat)
	{
		species = _species;
		name = _name;
		weight = _weight;
		sex = _sex;
		heartChamber = _heartChamber;
		blood = _blood;
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
		blood = A.blood;
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
		blood = A.blood;
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

	istream& operator>>(istream& in, Animal& A)
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
			A = Animal (ELEPHANT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		
		else if (s == "GIRAFFE")
		{
			A = Animal(GIRAFFE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "LION")
		{
			A = Animal(LION, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "TIGER")
		{
			A = Animal(TIGER, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "ORANGUTAN")
		{
			A = Animal(ORANGUTAN, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat);
		}	
		else if (s == "CHIMPANZEE")
		{
			A = Animal(CHIMPANZEE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "KOMODO")
		{
			A = Animal(KOMODO, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "BEAR")
		{
			A = Animal(BEAR, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "WHALE")
		{
			A = Animal(WHALE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "DOLPHIN")
		{
			A = Animal(DOLPHIN, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "CLOWNFISH")
		{
			A = Animal(CLOWNFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "BLUETANG")
		{
			A = Animal(BLUETANG, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "PIRANHA")
		{
			A = Animal(PIRANHA, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "PUFFFISH")
		{
			A = Animal(PUFFFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "EAGLE")
		{
			A = Animal(EAGLE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "CENDRAWASIH")
		{
			A = Animal(CENDRAWASIH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "OWL")
		{
			A = Animal(OWL, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat);
		}
		else if (s == "BAT")
		{
			A = Animal(BAT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "MACAU")
		{
			A = Animal(MACAU, name, weight, sex, hc,blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "COCKATOO")
		{
			A = Animal(COCKATOO, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "FROG")
		{
			A = Animal(FROG, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "ALLIGATOR")
		{
			A = Animal(ALLIGATOR, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "HIPPOPOTAMUS")
		{	
			A = Animal(HIPPOPOTAMUS, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else if (s == "TURTLE")
		{
			A = Animal(TURTLE, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat);
		}
		else
		{
		}
		return in;
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
		return id;
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
	
	Habitat Animal::getHabitat()
	{
		return habitat;
	}
