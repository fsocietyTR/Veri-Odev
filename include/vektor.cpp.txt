#include "Vektor.h"
#include "Yolcu.h"

using namespace std;

//Vektor::Vektor()
//{
//
//}

Vektor::Vektor()
{
	yolcuSayisi = 0;
	Yolcular = new Yolcu[boyut];
}
void Vektor::insert(const Yolcu& yeni, int no)
{
	/*for (int j = yolcuSayisi - 1; j >= no; j--) Yolcular[j + 1] = Yolcular[j];*/
	Yolcular[no] = yeni;
	
	yolcuSayisi++;
	
}
//Vektor::Vektor(string isim, int no)
//{
//	yolcuismi = isim;
//	yolcuKoltukNo = no;
//	yolcuNesnesiOlustur(yolcuismi, yolcuKoltukNo);
//}
//
//Yolcu* Vektor::yolcuNesnesiOlustur(string yolcuismi,int yolcuKoltukNo)
//{
//	/*Yolcu* pyolcu = new Yolcu(yolcuismi,yolcuKoltukNo);*/
//	
//	/*cout << pyolcu->isimgetir() << " " << pyolcu->koltukNogetir() << " " << &pyolcu << endl;*/
//	return pyolcu;
//}