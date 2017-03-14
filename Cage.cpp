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
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2 ; indeks++)
		{
			c[indeks]=0;
		}
		/*for (int indeks = 0; indeks < size ; indeks++)
		{
			Animal a[indeks];
		}*/
	}
	
	Cage::Cage(int _size)
	{
		size = _size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=0;
		}
		/*for (int indeks = 0; indeks < size ; indeks++)
		{
			Animal a[indeks];
		}*/
	}
	
	Cage::Cage(const Cage& C)
	{
		size = C.size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
		/*for (int indeks = 0; indeks < size ; indeks++)
		{
			a[indeks] = C.a[indeks];
		}*/
	}
	
	Cage::~Cage()
	{
		delete [] a;
		delete [] c;
	}
	
	Cage& Cage::operator=(const Cage& C)
	{
		delete [] a;
		delete [] c;
		size = C.size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
		for (int indeks = 0; indeks < size ; indeks++)
		{
			a[indeks] = C.a[indeks];
		}
		return *this;
	}

	void Cage::setValue(int i, int v)
	{
		c[i] = v;
	}

int Cage::getValue(int i)
	{
		return c[i];
	}
	
int Cage::getSize()
{
	return size;
}

void Cage::setSize(int _size)
{
	size = _size;
}
void Cage::setAnimal(Animal v)
{
	int i = 0;
	bool done = false;
	while (i < size && !done)
	{
		cout << " i set " << i << endl;
		//cout << a[i].getId() << endl;
		if (a[i].getSpecies() == NONE)
		{
			a[i] = v;
			cout << a[i].getId() << endl;
			done = true;
		}
		i++;
	}
}
Animal Cage::getAnimal(int i)
{
	return a[i];
}
bool Cage::isFull()	
{
	int count = 0;
	for (int i=0; i<size; i++)
	{
		//cout << a[i].getId()<< endl;
		if (a[i].getSpecies() != NONE)
			count++;
	}
	cout << "size="<<size << endl;
	cout << "count="<<count << endl;
	return (count > 0.3*size);
}

bool Cage::Search(int m, int n)
{
	int i = 0;
	bool found = false;
	while (i < size*2 && !found)
	{
		//cout << "m " << c[i] << endl;
		//cout << "n " << c[i+1] << endl;
		if (c[i] == m && c[i+1] == n)
		{
			found = true;
		}
		else
		{
			i += 2;
		}
	}
	return found;
}
