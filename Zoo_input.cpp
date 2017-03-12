/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include "Zoo.h"
using namespace std;

int main(){
	ifstream fin;
	Zoo a(3,3);

	fin.open("zoo.txt");
	fin >> a;
	cout << a;


	fin.close();

	a.Display(2,3,5,5);

	return 0;
}
