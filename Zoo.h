/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once
#include "Cell.h"
#include <iostream>
using namespace std;

/** @class Zoo
  */
class Zoo {
public:
	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran default.
      */
	Zoo();

	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran r x c.
      */
	Zoo(int _r, int _c);

	/** @brief Copy constructor.
	  * @param Z Zoo yang diacu cctor
	  */
	Zoo(const Zoo& Z);

	/** @brief Destructor.
    */
	~Zoo();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Z Zoo berisi data untuk diassign
	  */
	Zoo& operator=(const Zoo& Z);

	/** @brief operator>>.
	  * Menginput suatu Zoo dari file eksternal
	  * @param in operator input
	  * @param Z Zoo yang dibuat 
	  */
	friend istream& operator>>(istream& in, Zoo& Z);


	/** @brief operator>>.
	  * Mencetak suatu Zoo ke layar
	  * @param in operator output
	  * @param Z Zoo yang dicetak
	  */	
	friend ostream& operator<<(ostream& os, const Zoo& Z);

	/** @brief Display.
	  * Mencetak suatu Zoo (dengan batas) ke layar
	  * @param x1 baris terkiri
	  * @param y1 kolom teratas
	  * @param x2 baris terkanan
	  * @param y2 kolom terbawah
	  */	
	void Display(int x1, int y1, int x2, int y2);
	Cell getCell(int i, int j);

private:
	Cell** c;  	                /* matriks of pointer to cell */
	int row; 				        /* ukuran baris */
	int col; 				        /* ukuran kolom */
	static const int defRow = 50; 	/* default baris = 10 */
	static const int defCol = 50; 	/* default kolom = 10*/
};
