#pragma once

#include "other.h"

class Cell {
public:
	/** @brief Constructor
	*/
	Cell();

	/** @brief Constructor
	  * @param  _type tipe sel 
	  * @param _id karakter id sel
	  * @param _color warna sel
	  * @param _m baris
	  * @param _n kolom
	  */
	Cell(Place _type, char _id,Color _color, int _m, int _n);
	
	/** @brief Copy Constructor
	* @param Cell C yang ingin disalin.
	*/
	Cell(const Cell& C);

	/** @brief Destructor.
    */
	virtual ~Cell();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	Cell& operator=(const Cell& C);

	/** @brief getId
	 * Mengembalikan karakter id dari current cell 
	 * @return karakter current cell
	 */
	char getId();

	/** @brief getColor
	 * Mengembalikan warna dari current cell
	 * @return warna current cell
	 */
	Color getColor();

private:
	Place type;
	char id;
	Color color;
	int m;
	int n;
};
