#include "samolot.hpp"

void Display(const Samolot& obj)
{
	std::cout<<"Samolot posiada "<<obj.paliwo<<" paliwa\n";
	std::cout<<"moze pokonac dystans :"<<obj.dystans<<" \n";
	std::cout<<"jego współrzędne (x,y,z) = ("<<obj.x<<","<<obj.y<<","<<obj.z<<") \n";
	std::cout<<"aktualnie zjanduje sie na wysokosci :"<<obj.wysokosc<<" metrow\n";
}
Samolot Korekta(const Samolot& obj, d _korekta)
{
	Samolot tempVal = obj;
	tempVal.wysokosc -= _korekta;
	return tempVal;
}	