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
	int j;
	Cage *cage;
	
	fin.open("tcage.txt");
	fin >> Neff;
	cage = new Cage [Neff];
	
	
	int size;
	for(j=0;j<Neff;j++)
	{
		fin >> size;
		for (indeks =0 ; indeks<size ; indeks++)
		{
		}
	}
	fin.close();
	
	return 0;
}
