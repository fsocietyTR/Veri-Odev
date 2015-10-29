#ifndef OTOBUS_HPP
#define OTOBUS_HPP

#include<iostream>
#include<string>
#include"Vektor.h"

using namespace std;

class Otobus
{
public:
	Otobus(int numara)
	{
		OtobusNo = numara;
		Vektor* Yolcular = new Vektor();
	}
	
	Vektor* yolculariGetir()
	{
		return Yolcular;
	}

private:
	int OtobusNo;
	Vektor* Yolcular;


};



#endif