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
	
	fin.open("vz03.txt");
	fin >> Neff;
	Animal a[Neff];
	for (indeks = 0; indeks < Neff; indeks++)
	{
		fin >> a[indeks];
		cout << indeks;
	}

	fin.close();

	for (indeks = 0; indeks < Neff; indeks++)
	{
		a[indeks].interact();
		cout <<indeks;
	}

	
	return 0;
}
