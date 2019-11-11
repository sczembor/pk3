#include "radio.hpp"
#include "samolot.hpp"
#include "silnik.hpp"

int main()
{
	Samolot awionetka;
	Samolot boeing {1,2,3,4,5,6};
	awionetka = boeing;
	Display(boeing);
	Display(awionetka);
	boeing = Korekta(awionetka, 2);
	Display(boeing);
	return 0;
}