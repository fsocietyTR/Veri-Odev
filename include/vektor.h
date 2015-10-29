#ifndef VEKTOR_HPP
#define VEKTOR_HPP

#include "Yolcu.h"
#include <iostream>
#include <string>
#include <vector>
#define boyut 100

using namespace std;
class Yolcu;



class Vektor
{
public:
	Vektor();
	
		/*yolcuSayisi = 0;
		 Yolcular = new Yolcu[boyut];*/

	
		

	Vektor(string yolcuismi, int yolcuKoltukNo);
	
	Yolcu* yolcuNesnesiOlustur(string yolcuismi, int yolcuKoltukNo);

	void insert(const Yolcu& yeni, int no);
	
		//for (int j = 0; j < boyut; j++)
		//{
		//	//if (no == j)
		//	//{
		//	//	/*Yolcu* yp = new Yolcu();
		//	//	yp->isimAta(isim);
		//	//	yp->koltukNoata(no);
		//	//	Yolcular[no] =*yp;*/
		//	//	
		//	//}
		//}
		//

	
	const Yolcu& at(int i)
	{
		return Yolcular[i];
	}
	
private:
	string yolcuismi;
	int yolcuKoltukNo;

	Yolcu* Yolcular;
	int yolcuSayisi;
};

#endif