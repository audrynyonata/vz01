/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Cage.h"
#include "Cell.h"
using namespace std;

int main(){
	ifstream fin;
	int Neff;
	int indeks;
	Cage *cage;
	
	fin.open("tcage.txt");
	fin >> Neff;
	cage = new Cage [Neff];
	
	int j;
	int temp;
	int size;
	for(j=0;j<Neff;j++)
	{
		fin >> size;
		for (indeks =0 ; indeks<size ; indeks++)
		{
			fin >> temp;
			cage[Neff].setValue(indeks,temp);
		}
	}
	fin.close();
	
	return 0;
}
