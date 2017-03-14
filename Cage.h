/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.h                */

#ifndef CAGE_H
#define CAGE_H
 
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
	/** @brief GetValue
	  * Mengembalikan c[i]
	  * @param i indeks
	  * @return nilai c[i]
	  */
	int getValue(int i);
	
	/** @brief SetSize
	  * Mengisi size dengan nilai _size
	  * @param _size size
	  * @param v value
	  */
	void setSize(int _size);
	/** @brief GetSize
	  * Mengembalikan size
	  * @return size
	  */
	int getSize();
	/** @brief SetAnimal
	  * Mengisi a[i] dengan nilai v
	  * @param v value
	  */
	void setAnimal(Animal v);
	/** @brief GetAnimal
	  * Mengembalikan a[i] 
	  * @return nilai array a dengan indeks i
	  */
	Animal getAnimal(int i);
	
	/** @brief isFull
	  * Memeriksa apakah cage full atau tidak
	  */
	bool isFull();
	/** @brief Search
	  * Memeriksa apakah ada pasangan nilai m dan n dalam array c
	  */
	bool Search(int m, int n);
	
	/** @brief GetCellAnimal
	  * Mengembalikan animal dengan posisi m,n
	  * @return animal dengan posisi m,n
	  */
	Animal GetCellAnimal(int m, int n);
	
	/** @brief Mengembalikan jumlah daging yang diperlukan kebun binatang dalam 1 hari
	  * @return jumlah daging
	  */
	double ConsumedMeat();
	/** @brief Mengembalikan jumlah tumbuhan yang diperlukan kebun binatang dalam 1 hari
	  * @return jumlah tumbuhan
	  */
	double ConsumedVeg();
	
	/** @brief PrintInteract
	  * Memanggil interact milik semua binatang di kandang
	  */
	void PrintInteract();

private:
	int size;
	int * c;
	Animal * a;	
};
#endif
