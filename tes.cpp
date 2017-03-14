/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Zoo.h"
#include "Cage.h"
#include "Cell.h"
#include "Animal.h"
using namespace std;

int main(){
	ifstream fin;
	int NeffA;
	int NeffC;
	Cage * tCage;
	tCage = new Cage [500];
	Animal * a;
	a = new Animal [100];
		
	int indeks;
	int j;
	int temp;
	int size;

	Zoo z;
	fin.open("zoo.txt");
	if (fin.is_open())
	{
		fin >> z;
		fin.close();
	}
	cout<<z;
	fin.open("Animal.txt");
	if (fin.is_open()){
		fin >> NeffA;
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
		for (indeks =0 ; indeks<NeffA; ++indeks)
		{	
			fin >> s >> name >> weight >> gender >> hc >> blood >> vr >> mr >> id >> m >> n >> hab;
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
				a[indeks] = Animal (ELEPHANT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
			}	
			else if (s == "GIRAFFE")
			{
				a[indeks] = Animal(GIRAFFE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "LION")
			{
				a[indeks] = Animal(LION, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "TIGER")
			{
				a[indeks] = Animal(TIGER, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "ORANGUTAN")
			{
				a[indeks] = Animal(ORANGUTAN, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
			}	
			else if (s == "CHIMPANZEE")
			{
				a[indeks] = Animal(CHIMPANZEE, name, weight, sex, hc,  blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "KOMODO")
			{
				a[indeks] = Animal(KOMODO, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "BEAR")
			{
				a[indeks] = Animal(BEAR, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "WHALE")
			{
				a[indeks] = Animal(WHALE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "DOLPHIN")
			{
				a[indeks] = Animal(DOLPHIN, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "CLOWNFISH")
			{
				a[indeks] = Animal(CLOWNFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "BLUETANG")
			{
				a[indeks] = Animal(BLUETANG, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "PIRANHA")
			{
				a[indeks] = Animal(PIRANHA, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "PUFFFISH")
			{
				a[indeks] = Animal(PUFFFISH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "EAGLE")
			{
				a[indeks] = Animal(EAGLE, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "CENDRAWASIH")
			{
				a[indeks] = Animal(CENDRAWASIH, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "OWL")
			{
				a[indeks] = Animal(OWL, name, weight, sex, hc, blood,  vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "BAT")
			{
				a[indeks] = Animal(BAT, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "MACAU")
			{
				a[indeks] = Animal(MACAU, name, weight, sex, hc,blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "COCKATOO")
			{
				a[indeks] = Animal(COCKATOO, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "FROG")
			{
				a[indeks] = Animal(FROG, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "ALLIGATOR")
			{
				a[indeks] = Animal(ALLIGATOR, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
			}
			else if (s == "HIPPOPOTAMUS")
			{	
				a[indeks] = Animal(HIPPOPOTAMUS, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,1);
			}
			else if (s == "TURTLE")
			{
				a[indeks] = Animal(TURTLE, name, weight, sex, hc, blood, vr, mr, id, color, m,n,habitat,0);
			}
		}
		fin.close();
	}
	cout<<"Mau ke cage.txt"<<endl;
	fin.open("cage.txt");
	if (fin.is_open()){
		fin >> NeffC;
		
		for(j=0;j<NeffC;j++)
		{
			fin >> size;
			//cout<<"size="<<size<<endl;
			tCage[j] = Cage(size);
			for (indeks =0 ; indeks<(size*2) ; indeks++)
			{
				fin >> temp;
				tCage[j].setValue(indeks,temp);
				//cout<<"pasangan:"<<indeks<<" "<<tCage[j].getValue(indeks)<<endl;
			}
			//cout << cage[j].getAnimal(0).getId() << endl;
/*			Animal X;
			X = cage[j].getAnimal(0);
			cout << X.getId();
	*/	}
	
		fin.close();
	}
	
	for (indeks = 0; indeks<NeffA; indeks++)
	{
		cout<< "id animal " << a[indeks].getId()<<endl;
		bool done= false;
		int k = 0;
		while ((k < NeffC) && !done)
		{
			cout << "cek kandang " << k << endl;
			if (tCage[k].Search(a[indeks].getM(), a[indeks].getN()))
			{
				tCage[k].setAnimal(a[indeks]);
				done = true;
				cout << "tCage " << tCage[k].getAnimal(indeks).getId() << indeks << endl;
			}
			else
			{
			//	cout << "gagal" << endl;
				k++;
			}
		}
	}
/*
	for (indeks = 0; indeks<NeffA; indeks++)
	{
		cout<< "id animal " << a[indeks].getId()<<endl;
		bool done= false;
		int i = 0;
		while ((i < NeffC) && !done)
		{
			cout << "cek kandang" << endl;
			if (tCage[i].Search(a[indeks].getM(), a[indeks].getN()))
			{
				cout << "	posisi kandang cocok, cage index" << i << endl;
				if (tCage[i].isFull()==false)
				{
					cout<< "		kandang enggafull" <<endl; 
					cout << 1 << endl;
					if ((a[indeks].getHabitat() == z.getCell(tCage[i].getValue(indeks), tCage[i].getValue(indeks+1)).getId()))
					{
						cout<< "			habitat cocok"<<endl;
						cout << 2 << endl;
						if (a[indeks].getWild())
						{
							cout<< "				hewan liar"<<endl;
							j = 0;
							done=true;
							while(j<tCage[i].getSize() && done)
							{
								if (tCage[i].getAnimal(j).getSpecies() != a[indeks].getSpecies())
								{
									done=false;
									cout << "					ketemu hewan liar lain"<<endl;
								}
								j++;
							}
						}
						else
						{
							j = 0;
							done=true;
							cout<< "				bukan hewan liar"<<endl;
							while(j<tCage[i].getSize() && done)
							{
								if (tCage[i].getAnimal(j).getWild()&&tCage[i].getAnimal(j).getSpecies()!=NONE)
								{
									done= false;
									cout << "						ketemu hewan liar"<<endl;
								}
								j++;
							}
						
						}
					}	
				}
			}
			i++;
		}
		if (done)
			cout<<"done=true"<<endl;
		else
			cout<<"done=false"<<endl;
		if (done)
			{
				tCage[i].setAnimal(a[indeks]);
				cout << "Kondisi kandang setelah ditambah= size:"<< endl;
				bool ccc = tCage[i].isFull();
				cout<<"lalala"<<endl;
			//	cout << tCage[i].getAnimal(indeks).getId() << endl ;
				
			}
	}*/
	//cout << cage[0].getAnimal(0).getId() ;
/*	j = 0;
	while (j<NeffC)
	{
		indeks = 0;
		//while ((cage[j].getAnimal(indeks)).getSpecies() != NONE)
		//{
			cout << j << " " << (cage[j].getAnimal(indeks)).getId() << endl;
	//		indeks++;
		//}
		j++;
	}*/

	delete [] a;
	delete [] tCage;
	return 0;
}
