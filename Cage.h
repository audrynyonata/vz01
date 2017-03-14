/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.h                */

#pragma once

#include "other.h"
#include "Animal.h"
#include "Cell.h"
#include <iostream>
using namespace std;

class Cage{
public:
	/** @brief Constructor
	*/
	Cage();

	/** @brief Constructor
	  * @param _size banyaknya cell dalam satu cage
	  */
	Cage(int _size);
	
	/** @brief Copy Constructor
	* @param Cage C yang ingin disalin.
	*/
	Cage(const Cage& C);

	/** @brief Destructor.
    */
	virtual ~Cage();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @param Cage C yang ingin disalin.
	  * @return Cage yang sudah di assign nilai dari current object.
	  */
	Cage& operator=(const Cage& C);

	/** @brief SetValue
	  * Mengisi array c[i] dengan nilai v
	  * @param i indeks
	  * @param v value
	  */
	void setValue(int i, int v);
	int getValue(int i);
	int getSize();
	void setSize(int _size);
	void setAnimal(Animal v);
	Animal getAnimal(int i);
	
	bool isFull();
	bool Search(int m, int n);
	Animal GetCellAnimal(int m, int n);
	
private:
	int size;
	int * c;
	Animal * a;	
};
