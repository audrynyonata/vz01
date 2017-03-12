/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include "other.h"
#include <iostream>
using namespace std;


class Animal{
public:
	/** @brief Constructor
	*/
	Animal();

	/** @brief Constructor
	  * @param _species spesies binatang
	  * @param _name nama binatang
	  * @param _weight berat binatang
	  * @param _sex jenis kelamin;
	  * @param _heartChamber banyaknya ruang jantung binatang;
	  * @param _vegRatio rasio makanan sayuran
	  * @param _meatRatio rasio makanan daging
	  * @param _id karakter renderable
	  * @param _color warna renderable
	  * @param _m indeks posisi baris
	  * @param _n indeks posisi kolom
	  * @param _habitat jenis habitat binatang;
	  */
	Animal(Species _species, string _name, double _weight, Sex _sex, int _heartChamber, double _vegRatio, double _meatRatio, char _id, Color _color, int _m, int _n, Habitat _habitat);
	
	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	Animal(const Animal& A);

	/** @brief Destructor.
    */
	virtual ~Animal();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	Animal& operator=(const Animal& A);

	/** @brief Interact
	  * Menampilkan experience yang dialami pengamat dengan hewan.
	  */
	virtual void interact();

	//friend istream& operator>>(istream& in, Animal& A);

private:
	Species species;
	string name;
	double weight;
	Sex sex;
	int heartChamber;
	double vegRatio, meatRatio;
	char id;
	Color color;
	int m;
	int n;
	Habitat habitat;
};
