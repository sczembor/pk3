#ifndef SAMOLOT_H_
#define SAMOLOT_H_

#include <iostream>

typedef double d;

class Samolot
{
	// d paliwo, dystans, x, y, z, wysokosc;
public:
	d paliwo, dystans, x, y, z, wysokosc;
	//const int  MASA = 50;
	char* sygnatura;
	Silnik psilnik;
	Radio& pradio;

	//konstruktory
	Samolot()
		: paliwo(0), dystans(0), x(0), y(0), z(0), wysokosc(0)
		 {
		 	Silnik();
		 	Radio();

		 	std::cout<<"wywolales konstruktor bezargumentowy\n";
		 } 
	Samolot(d _paliwo, d _dystans, d _x, d _y, d _z, d _wysokosc)
		:paliwo(_paliwo), dystans(_dystans), x(_x), y(_y), z(_z), wysokosc(_wysokosc)
		 {
		 	std::cout<<"wywolales konstruktor wieloargumentowy\n";
		 }
	//metody publiczne
// friend void Display(const Samolot& obj);
// friend Samolot Korekta(const Samolot& obj, d _korekta);


};

void Display(const Samolot& obj);
Samolot Korekta(const Samolot& obj, d _korekta);


#endif