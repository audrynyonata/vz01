#include "Cell.h"

Cell::Cell(){
	type=PLACE_NONE;
	id='?';
	color=WHITE;
	m=0;
	n=0;
}

Cell::Cell(Place _type, char _id,Color _color, int _m, int _n){
	type=_type;
	id=_id;
	color=_color;
	m=_m;
	n=_n;
}

Cell::Cell(const Cell& C){
	type=C.type;
	id=C.id;
	color=C.color;
	m=C.m;
	n=C.n;
}

Cell::~Cell()
{
}

Cell& Cell::operator=(const Cell& C){
	type=C.type;
	id=C.id;
	color=C.color;
	m=C.m;
	n=C.n;
}

char Cell::getId(){
	return id;
}

Color Cell::getColor(){
	return color;
}
