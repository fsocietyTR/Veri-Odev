#include <iostream>
#include "Yolcu.h"
#include "Vektor.h"
#include "Otobus.h"

#include <fstream>

using namespace std;

int main()
{
	/*Yolcu* pyolcu = new Yolcu();*/


	/*pyolcu->isimAta("cagatay");
	pyolcu->koltukNoata(54);

	cout << pyolcu->isimgetir() << " " << pyolcu->koltukNogetir() << " " <<&pyolcu << endl;
	system("pause");*/

	Vektor* vektor = new Vektor();

	/* Yolcu* py = vektor->yolcuNesnesiOlustur("cagatay", 10);*/

	//ifstream dosya("Yolcular.txt", ios_base::in); // dosya okuma modunda açýlýyor. 
	//if (!dosya) // Burada if karar mekanizmasýný kullanarak dosyanýn açýlýp açýlamadýðýný kontrol ediyoruz. 
	//{
	//	cerr << "Dosya acilamadi !!!" << endl;
	//	exit(1);
	//}
	//while (!dosya.eof())
	//{
	/*
	string isim;
	int no;
	string isim1;
	int no1;*/
	/*Yolcu* py[20];
	
	for (int i = 0; i < 20; i++)
	{
		dosya >> isim >> no;
		 py[i] = vektor->yolcuNesnesiOlustur(isim, no);
		cout << py[i]->isimgetir() << " " << py[i]->koltukNogetir() << " " << &py[i] << endl;
	}*/
		

		/*dosya >> isim1 >> no1;
	Yolcu* pz = vektor->yolcuNesnesiOlustur(isim1, no1);

	cout << py[i]->isimgetir() << " " << py->koltukNogetir() << " " << &py << endl;
	cout << pz->isimgetir() << " " << pz->koltukNogetir() << " " << &pz << endl;*/
   /* }*/

	Otobus* o1 = new Otobus(1);
	Otobus* o2 = new Otobus(2);
	int no;
	string isim;
	ifstream dosya("Yolcular.txt", ios_base::in);
	if (!dosya) // Burada if karar mekanizmasýný kullanarak dosyanýn açýlýp açýlamadýðýný kontrol ediyoruz. 
	{
			cerr << "Dosya acilamadi !!!" << endl;
			exit(1);
	}

	dosya >> isim >> no;
	Yolcu* py = new Yolcu();
	py->isimAta(isim);
	py->koltukNoata(no);
	vektor->insert(*py, no);

	cout << vektor->at(2) << endl;

	system("pause");



}