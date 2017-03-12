/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once
#include "Cell.h"
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

	  
	/** @brief Operator[].
	  * Operator subscript.
	  * @param x integer menjadi indeks 
	  */	  
	Proxy operator[](int x)
	{
		return Proxy(*this, x);
	}

private:
	Cell ** *c;  	                /* matriks of pointer to cell */
	int row; 				        /* ukuran baris */
	int col; 				        /* ukuran kolom */
	static const int defRow = 50; 	/* default baris = 10 */
	static const int defCol = 50; 	/* default kolom = 10*/
};
