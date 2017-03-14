/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Zoo.h"
using namespace std;

int main(){
	ifstream fin;
	Zoo z;

	fin.open("zoo.txt");
	fin >> z;
	cout << z;


	fin.close();

	a.Display(2,3,5,5);

	return 0;
}
