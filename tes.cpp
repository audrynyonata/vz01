/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Cage.h"
#include "Cell.h"
#include "Animal.h"
using namespace std;

int main(){
	//ifstream finCage;
	int NeffC;
	int indeksC;
	Cage *cage;
	ifstream fin;
	int Neff;
	int indeks;
	Animal *a;
/*	ifstream finAni;
	int NeffA;
	int indeksA;
	Animal *a;*/
	
	fin.open("tcage.txt");
	fin >> NeffC;
	cage = new Cage [NeffC];
	
	int j;
	int temp;
	int size;
	for(j=0;j<NeffC;j++)
	{
		fin >> size;
		cage[j].setSize(size);
		for (indeksC =0 ; indeksC<size*2 ; indeksC++)
		{
			fin >> temp;
			cage[j].setValue(indeksC,temp);
		}
	}
	
	fin.close();
/*	for(j=0;j<Neff;j++)
	{
		for (indeks =0 ; indeks<cage[j].getSize()*2 ; indeks++)
		{
			cage[j].getValue(indeks);
		}
	}*/
	
	
	
	fin.open("vz03.txt");
	fin >> Neff;
	a = new Animal [Neff];
	for (indeks =0 ; indeks<Neff; indeks++)
	{
		fin >> a[indeks];
		cout << a[indeks].getId() << endl;
	}
	fin.close();
	
/*	finAni.open("vz03.txt");
	finAni >> NeffA;
	a = new Animal [NeffA];
	for (indeksA =0 ; indeksA<NeffA; indeksA++)
	{	
	//	finAni >> a[indeksA];
	//	cout << a[indeksA].getId() << endl;
	}
	finAni.close();*/
	
	return 0;
}
