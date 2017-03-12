#include "Zoo.h"

Zoo::Zoo(){
	c= new Cell* [defRow];
	for (int i=0;i<defRow;i++)
	{
		c[i]= new Cell [defCol];
	}
}

Zoo::Zoo(int _r, int _c){
	row=_r;
	col=_c;
	c= new Cell* [row];
	for (int i=0;i<row;i++)
	{
		c[i]= new Cell [col];
	}
}

Zoo::Zoo(const Zoo& Z){
	row=Z.row;
	col=Z.col;
	c= new Cell* [row];
	for (int i=0;i<row;i++)
	{
		c[i]= new Cell [col];
	}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			c[i][j]=Z.c[i][j];
		}
	}
}

Zoo::~Zoo(){
	for (int i=0;i<row;i++)
	{
		delete [] c[i];
	}
	delete [] c;
}

Zoo& Zoo::operator=(const Zoo& Z){
	for (int i=0;i<row;i++)
	{
		delete [] c[i];
	}
	delete [] c;
	row=Z.row;
	col=Z.col;
	c= new Cell* [row];
	for (int i=0;i<row;i++)
	{
		c[i]= new Cell [col];
	}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			c[i][j]=Z.c[i][j];
		}
	}
}

istream& operator>>(istream& in, Zoo& Z)
{
	int r, c;
	char k;

  	in >> r >> c;
  	Zoo input(r, c);

  	for(int i=0; i<r; i++){
    	for(int j=0; j<c; j++){
     		in >> k;
      		switch (k){
	        	case '#' : input.c[i][j] = Cell(WATERHABITAT,'#',WHITE,i,j); break;
	        	case 'O' : input.c[i][j] = Cell(AIRHABITAT,'O',WHITE,i,j); break;
	        	case 'X' : input.c[i][j] = Cell(LANDHABITAT,'X',WHITE,i,j); break;
	        	case '*' : input.c[i][j] = Cell(PARK,'*',WHITE,i,j); break;
	        	case 'R' : input.c[i][j] = Cell(RESTAURANT,'R',WHITE,i,j); break;
	        	case '-' : input.c[i][j] = Cell(ROAD,'-',WHITE,i,j); break;
	        	case 'i' : input.c[i][j] = Cell(ENTRANCE,'i',WHITE,i,j); break;
	        	case 'o' : input.c[i][j] = Cell(EXIT,'o',WHITE,i,j); break;
      		}
    	}
  	}

  	Z = input;
  	return in;
}

ostream& operator<<(ostream& os, const Zoo& Z){
  	for(int i=0; i<Z.row; i++){
    	for(int j=0; j<Z.col; j++){
      		os << Z.c[i][j].getId();
      		os << " ";
    	}
    	os << endl;
  	}
  	return os;
}

void Zoo::Display(int x1, int y1, int x2, int y2){
  	for(int i=x1; i<=x2; i++){
    	for(int j=y1; j<=y2; j++){
    		cout<<c[i][j].getId();
    	}
    cout << endl;
  	}
}