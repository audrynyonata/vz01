/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.cpp                */

#include "other.h"
#include "Animal.h"
#include "Cage.h"
#include <iostream>
using namespace std;


	Cage::Cage()
	{
		size = 0;
		c = new int [size];
		for (int indeks = 0; indeks < size ; indeks++)
		{
			c[indeks]=0;
		}
	}
	
	Cage::Cage(int _size)
	{
		size = _size;
		c = new int [size];
		for (int indeks = 0; indeks < size; indeks++)
		{
			c[indeks]=0;
		}
	}
	
	Cage::Cage(const Cage& C)
	{
		size = C.size;
		c = new int [size];
		for (int indeks = 0; indeks < size; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
	}
	
	Cage::~Cage()
	{
		delete [] c;
		delete [] a;
	}
	
	Cage& Cage::operator=(const Cage& C)
	{
		size = C.size;
		c = new int [size];
		for (int indeks = 0; indeks < size; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
		return *this;
	}

	void Cage::setValue(int i, int v)
	{
		c[i] = v;
	}

