#include"Yolcu.h"

using namespace std;

Yolcu::Yolcu()
{

}

//Yolcu::Yolcu(string pisim, int pkoltukNo)
//{
//	isim = pisim;
//	koltukNo = pkoltukNo;
//}
//
string Yolcu::isimgetir()
{
	return isim;
}

void Yolcu::isimAta(string pisim)
{
	isim = pisim;
}

int Yolcu::koltukNogetir()
{
	return koltukNo;
}

void Yolcu::koltukNoata(int pkoltukNo)
{
	koltukNo = pkoltukNo;
}
//
