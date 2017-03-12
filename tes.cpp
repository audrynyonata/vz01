#include "Animal.h"
#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;

int main ()
{	
	Animal *a;
	ifstream fin;
	string s,name;
	double weight;
	string gender;
	Sex sex;
	int hc;
	double vr, mr;
	char id;
	Color color;
	int m;
	int n;
	string hab;
	Habitat habitat;
	
	int indeks = 0;
	int Neff;
	fin.open("vz03.txt");
	if (fin.is_open())
	{
		fin >> Neff;
		a = new Animal[Neff];
		for (indeks =0;indeks<Neff;indeks++)
		{
			fin >> s >> name >> weight >> gender >> hc >> vr >> mr >> id >> m >> n >> hab;
			
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
				a[indeks] = Animal(ELEPHANT, name, weight, sex, hc, vr, mr, id, color, m,n,habitat);
			}
			else if (s == "GIRAFFE")
			{
				a[indeks] = Animal(GIRAFFE, name, weight, sex, hc, vr, mr, id, color, m,n,habitat);
			}
			else if (s == "LION")
			{
				a[indeks] = Animal(LION, name, weight, sex, hc, vr, mr, id, color, m,n,habitat);
			}
			else if (s == "TIGER")
			{
				cout << endl;
			}
			else if (s == "ORANGUTAN")
			{
				cout << endl;
			}		
			else if (s == "CHIMPANZEE")
			{
				cout << endl;
			}
			else if (s == "KOMODO")
			{
				cout << endl;
			}
			else if (s == "BEAR")
			{
				cout << endl;
			}
			else if (s == "WHALE")
			{
				cout << endl;
			}
			else if (s == "DOLPHIN")
			{
				cout << endl;
			}
			else if (s == "CLOWNFISH")
			{
				cout << endl;
			}
			else if (s == "BLUETANG")
			{
				cout << endl;
			}
			else if (s == "PIRANHA")
			{
				cout << endl;
			}
			else if (s == "PUFFFISH")
			{
				cout << endl;
			}
			else if (s == "EAGLE")
			{
				cout << endl;
			}
			else if (s == "CENDRAWASIH")
			{
				cout << endl;
			}
			else if (s == "OWL")
			{
				cout << endl;				
			}
			else if (s == "BAT")
			{
				cout << endl;	
			}
			else if (s == "MACAU")
			{
				cout << endl;	
			}
			else if (s == "COCKATOO")
			{
				cout << endl;
			}
			else if (s == "FROG")
			{
				cout << endl;	
			}
			else if (s == "ALLIGATOR")
			{
				cout << endl;	
			}
			else if (s == "HIPPOPOTAMUS")
			{	
				cout << endl;
			}
			else if (s == "TURTLE")
			{
				cout << endl;	
			}
			else
			{
			}
			fin.ignore();
			s = "\0";
			Neff++;
			indeks++;
		}
	}
	fin.close();
	a[0].interact();
	return 0;
}
