#ifndef SILNIK_H_
#define SILNIK_H_

class Silnik
{
private:
	bool stan;
	int szybkosc, identyfikator;
public:
	Silnik();
	~Silnik();
private:
	Silnik& operator=(const Silnik& obj);
};

#endif