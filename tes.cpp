/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Cage.h"
#include "Cell.h"
#include "Animal.h"
using namespace std;

int main(){
	ifstream fin;
	int NeffA;
	int NeffC;
	
	Cage *cage;
	Animal *a;
	
	int indeks;
	int j;
	int temp;
	int size;

	fin.open("vz03.txt");
	fin >> NeffA;
	a = new Animal [NeffA];
	for (indeks =0 ; indeks<NeffA; indeks++)
	{
		fin >> a[indeks];
	}
	fin.close();

	fin.open("tcage.txt");
	fin >> NeffC;
	cage = new Cage [NeffC];
	
	for(j=0;j<NeffC;j++)
	{
		fin >> size;
		cage[j].setSize(size);
		for (indeks =0 ; indeks<size*2 ; indeks++)
		{
			fin >> temp;
			cage[j].setValue(indeks,temp);
		}
	}
	fin.close();

	for (indeks =0 ; indeks<NeffA; indeks++)
	{
		cout << a[indeks].getId() << endl;
	}
	
	for(j=0;j<NeffC;j++)
	{
		size = cage[j].getSize();
		for (indeks =0 ; indeks<size*2 ; indeks++)
		{
			cage[j].getValue(indeks);
		}
	}
	
	
	bool found = false;
	int x,y;
	for (indeks = 0; indeks<NeffA; indeks++)
	{
		
	}
	
	return 0;
}
