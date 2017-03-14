/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Zoo.h"
#include "Cage.h"
#include "Cell.h"
#include "Animal.h"
using namespace std;

int main(){
	ifstream fin;
	Zoo z;
	fin.open("zoo.txt");
	if (fin.is_open())
	{
		fin >> z;
		fin.close();
	}
	cout<<z;
	
	int ncage = 21;
		
	int py;
	int px;

	int i,j;
	int n;
	
	int visited[15][15];
	for (int i =0; i< 15; i++)
	{
		for (int j=0;j<15;j++)
		{	if (z.getCell(px,py).getId() == 'i' || (z.getCell(px,py).getId() == 'o' || (z.getCell(px,py).getId() == '-')))
			{
				visited[i][j] = 1;
			}
			else
			{
				visited[i][j] = 0;
			}	
		}
	}

	srand(time(NULL));
	do
	{
		px = rand() % 15;
		py = rand() % 15;
	}
	while (z.getCell(px,py).getId() != 'i');
	
	visited[px][py] = 1;
	cout << "px " << px << "py " << py << endl;
		
	bool found = false;
	int xen, yen;
	i = px;
	j = py;
	while (z.getCell(i,j).getId() != 'o')
	{
		visited[i][j] = 0;
		cout << "(" << i << "," << j << ") :" << endl;

		bool fcage = false;
		int icage = 0;
		while ((icage < ncage) && !fcage){
		  if (z.getCage(icage).Search(i+1, j)){
			z.getCage(icage).printInteract();
			fcage = true;
		  }else{
			icage++;
		  }
		}

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (z.getCage(icage).Search(i-1, j)){
        z.getCage(icage).printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (z.getCage(icage).Search(i, j+1)){
        z.getCage(icage).printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (z.getCage(icage).Search(i, j-1)){
        z.getCage(icage).printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    if ((i+1<15) && visited[i+1][j])
      i++;
    else if ((i-1>=0) && visited[i-1][j])
      i--;
    else if ((j+1<15) && visited[i][j+1])
      j++;
    else if ((j-1>=0) && visited[i][j-1])
      j--;
    else
      break;
  }
	
	return 0;
}
