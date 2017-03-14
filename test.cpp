/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Zoo.h"
#include "Cage.h"
#include "Cell.h"
#include "Animal.h"
using namespace std;

void ReadCage(Cage* tCage, int &NeffC, Animal* a, int &NeffA){
	ifstream fin;
	int NeffA, NeffC;
		
	int indeks,j,k,ia,ic;
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
		a = new Animal [NeffA];
		
		for (j =0;j<NeffA;j++)
		{
			fin >> a[j];
		}
		fin.close();
	}
	
	fin.open("cage.txt");
	if (fin.is_open()){
		fin >> NeffC;
		tCage = new Cage [NeffC];
		for(j=0;j<NeffC;j++)
		{
			fin >> size;
			tCage[j] = Cage(size);
			for (indeks =0 ; indeks<(size*2) ; indeks++)
			{
				fin >> temp;
				tCage[j].setValue(indeks,temp);
			}
		}
	
		fin.close();
	}

	for (indeks = 0; indeks<NeffA; indeks++)
	{
		bool set = false;
		bool buas = false;
		j = 0;
		while ((j < NeffC) &&!set)
		{
			if (tCage[j].Search(a[indeks].getM(), a[indeks].getN()))
			{
				if (!tCage[j].isFull())
				{
					if ((a[indeks].getHabitat() == z.getCell(a[indeks].getM(), a[indeks].getN()).getId()) || (a[indeks].getHabitat() == 'Q' && (z.getCell(a[indeks].getM(), a[indeks].getN()).getId()=='X' || z.getCell(a[indeks].getM(), a[indeks].getN()).getId()=='#')))
					{
						if (a[indeks].getWild())
						{
							k = 0;
							while(k<tCage[j].getSize() && !set)
							{
								if ((tCage[j].getAnimal(k).getSpecies() == a[indeks].getSpecies()) || (tCage[j].getAnimal(k).getSpecies()==NONE))
								{				
									tCage[j].setAnimal(a[indeks]);
									set = true;
								}
								k++;
							}
						}
						else
						{
							k = 0;
							while(k<tCage[j].getSize() && !buas)
							{
								buas = false;
								if (tCage[j].getAnimal(k).getWild()&&tCage[j].getAnimal(k).getSpecies()!=NONE)
								{
									buas= true;
								}
								k++;
							}
							if (!buas && k!=0)
							{
								tCage[j].setAnimal(a[indeks]);
								set = true;
							}
						}
					}	
				}
			}
			j++;
			set = false;
			buas = false;
		}
	}

	//cetak tCage
/*	for (j=0; j<NeffC; j++)
	{
		ia = 0;
		ic = 0;
		while (ic<tCage[j].getSize()*2 && ia<tCage[j].getSize()){
			cout<<"pasangan:"<< j << " " << tCage[j].getAnimal(ia).getM() <<" "<< tCage[j].getAnimal(ia).getN() << " " << tCage[j].getAnimal(ia).getId() << endl;
			ic += 2;
			ia++;
		}
	}*/
	
	delete [] a;
	delete [] tCage;
	return 0;
}

int main(){
	Cage * tCage;
	Animal * a;
	int i, NeffC, NeffA;
	double meat = 0;
	double veg = 0;
	
	ReadFile(tCage, NeffC, a, NeffA);
	for (i=0; i<NeffC; i++)
	{
		meat += tCage[i].ConsumedMeat();
	}
	cout << "meat " << meat << endl;
}
