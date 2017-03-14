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

	cout<<"lalala"<<endl;
	Zoo z;
	fin.open("zoo.txt");
	while (fin >> z)
	{
		
	}
	fin.close();
	cout<<z;
	/*
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
	*/
	//cout<<z;
	/*

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
	z.setTCage(tCage,NeffC);
	cout<<z;
	*/
	
	return 0;
}