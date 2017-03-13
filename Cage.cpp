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
		for (int indeks = 0; indeks < size ; indeks++)
		{
			a[indeks].setSpecies(NONE);
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
		for (int indeks = 0; indeks < size ; indeks++)
		{
			a[indeks].setSpecies(NONE);
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

void Cage::getValue(int i)
	{
		cout <<c[i]<< endl;
	}
	
int Cage::getSize()
{
	return size;
}

void Cage::setSize(int _size)
{
	size = _size;
}
void Cage::setAnimal(int i, Animal v)
{
	a[i] = v;
}
Animal Cage::getAnimal(int i)
{
	return a[i];
}
bool Cage::isFull()	
{
	int count;
	for (int i=0; i<size; i++)
	{
		if (a[i].getSpecies() != NONE)
			count++;
	}
	return (count > 0.3*size);
}
	
