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
	Animal *a;
	
	fin.open("vz03.txt");
	fin >> Neff;
	a = new Animal [Neff];
	for (indeks =0 ; indeks<Neff; indeks++)
	{
		fin >> a[indeks];
		cout << a[indeks].getId() << endl;
	}
	fin.close();
	
	return 0;
}
