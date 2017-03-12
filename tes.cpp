/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Animal.h"

using namespace std;

int main(){
	ifstream fin;
	int Neff;
	int indeks;
	Cage *c;
	int size;
	fin.open("tcage.txt");
	fin >> Neff;
	c = new Cage [Neff];
	fin >> size;
	Cage[indeks].size = size;
	for (indeks =0 ; indeks<size ; indeks++)
	{
		fin >> a[indeks].x;
		fin >> a[indeks].y;
	}
	fin.close();
	
	return 0;
}
