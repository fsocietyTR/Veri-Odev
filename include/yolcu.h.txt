#ifndef YOLCU_HPP
#define YOLCU_HPP

#include <iostream>
#include <string>

using namespace std;

class Yolcu
{
public:
	Yolcu();

	//Yolcu(string pisim, int pkoltukNo);//p koymanýn amacý public deki isimlerin P si
	Yolcu(const string &ad) :isim(ad){}
	void koltukNoata(int pkoltukNo);
	int koltukNogetir();
	void isimAta(string pisim);
	string isimgetir();


private:
	string isim;
	int koltukNo;
};

#endif