#include "Zoo.h"


Zoo::Zoo(){
  c= new Cell* [def_row];
  for (int i=0;i<def_row;i++)
  {
    c[i]= new Cell [def_col];
  }
  t_cage = new Cage [n_cage];
}

Zoo::Zoo(int _r, int _c, int _nc){
  row=_r;
  col=_c;
  c= new Cell* [row];
  for (int i=0;i<row;i++)
  {
    c[i] = new Cell [col];
  }
  n_cage = _nc;
  t_cage = new Cage [n_cage]; 
}

Zoo::Zoo(const Zoo& Z){
  row=Z.row;
  col=Z.col;
  n_cage=Z.n_cage;
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
  t_cage = new Cage [n_cage];
}

Zoo::~Zoo(){
  for (int i=0;i<row;i++)
  {
    delete [] c[i];
  }
  delete [] c;
  delete [] t_cage;
}

Zoo& Zoo::operator=(const Zoo& Z){
  if (this != &Z){
    for (int i=0;i<row;i++) {
      delete [] c[i];
    }
    delete [] c;
    delete [] t_cage;
    row=Z.row;
    col=Z.col;
    n_cage=Z.n_cage;
    c= new Cell* [row];
    for (int i=0;i<row;i++) {
      c[i]= new Cell [col];
    }
    for (int i=0;i<row;i++) {
      for (int j=0;j<col;j++) {
        c[i][j]=Z.c[i][j];
      }
    }
    t_cage = new Cage [n_cage];
    for (int i=0;i<n_cage;i++) {
      t_cage[i]=Z.t_cage[i];
    }
  }
  return *this;
}

istream& operator>>(istream& in, Zoo& Z)
{
  int r, c, cg, s,temp;
  char k;
  in >> r >> c >> cg;
  Zoo input(r, c, cg);
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
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
  for(int i=0;i<input.n_cage;i++) {
    in >> s;
    input.t_cage[i].setSize(s);
    cout<<"123"<<endl;
    cout<<i<<endl;
    for (int j =0 ; j<(input.t_cage[i].getSize()*2) ; j++) {
      in >> temp;
      input.t_cage[i].setValue(j,temp);
      cout<<"lololo332"<<endl;
    }
    cout<<"kokokk ke-"<<i<<endl;
  }
  cout<<"finish"<<endl;
  Z = input;
  return in;
}

ostream& operator<<(ostream& os, const Zoo& Z){
  char cc;
  for(int i=0; i<Z.row; i++) {
    for(int j=0; j<Z.col; j++) {
      int k=0;
      //cari apakah ada hewan di sel (i,j)
      bool found = false;
      while ((k<Z.n_cage) && (!found)) {
        if (Z.t_cage[k].Search(i,j)) {
          cc=Z.t_cage[k].GetCellAnimal(i,j).getId();
          found=true;
        }
        k++;
      }
      if (found)
        os << cc;
      else
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

Cell Zoo::getCell(int i, int j) {
  return c[i][j];
}

Cage Zoo::getCage(int i) {
  return t_cage[i];
}

void Zoo::setTCage(Cage* c, int NeffC) {
  for (int i=0;i<NeffC;i++) {
    t_cage[i]=c[i];
  }
}

double Zoo::ConsumedMeat()
{
	double sum;
	for (int i=0; i<n_cage; i++)
	{
		sum += t_cage[i].ConsumedMeat();
	}
}
double Zoo::ConsumedVeg()
{
	double sum;
	for (int i=0; i<n_cage; i++)
	{
		sum += t_cage[i].ConsumedVeg();
	}
}
