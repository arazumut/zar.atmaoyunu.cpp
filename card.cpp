#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <time.h>
using namespace std;

// --------------------------------------------------------------------
//      BY Kamil Umut Araz  instagram : k.umutarazz
// ----------------------------------------------------------------------

class oyun
{
public:
	string isim;
	int para;
	void isimsor();
};

class kullanici1 : public oyun
{
public:
	void isimsor()
	{
		cout << "İlk Kullanıcı Olarak Lütfen İsminizi Giriniz: ";
		cin >> isim;
	}
};

class kullanici2 : public oyun
{
public:
	void isimsor()
	{
		cout << "İkinci Kullanıcı Olarak Lütfen İsminizi Giriniz: ";
		cin >> isim;
	}
};


class welcome
{
public:
	void hosgeldiniz()
	{

		cout << "******************** 21 Oyununa Hoşgeldiniz ********************" << endl;

	};
};



int main()
{
	oyun oyun;
	kullanici1 ilk;
	kullanici2 ikinci;
	welcome welcome;
	welcome.hosgeldiniz();
	ilk.isimsor();
	ikinci.isimsor();
	cout << ilk.isim + " Oyuna Hoşgeldin " << endl;
	cout << ikinci.isim + " Oyuna Hoşgeldin " << endl;
	cout << " " << endl;


	int ilkkart1;
	int ikincikart1;
	int ucuncukart1;
	int dorduncukart1;
	int besincikart1;

	int ilkkart2;
	int ikincikart2;
	int ucuncukart2;
	int dorduncukart2;
	int besincikart2;



	char sor = 'H';

	srand((unsigned)time(NULL));
	for (int i = 0; i < 1; i++)
	{
		ilkkart1 = (1 + 10 * rand() / RAND_MAX);
		ilkkart2 = (1 + 10 * rand() / RAND_MAX);
		ikincikart1 = (1 + 10 * rand() / RAND_MAX);
		ikincikart2 = (1 + 10 * rand() / RAND_MAX);
		ucuncukart1 = (1 + 10 * rand() / RAND_MAX);
		ucuncukart2 = (1 + 10 * rand() / RAND_MAX);
		dorduncukart1 = (1 + 10 * rand() / RAND_MAX);
		dorduncukart2 = (1 + 10 * rand() / RAND_MAX);
		besincikart1 = (1 + 10 * rand() / RAND_MAX);
		besincikart2 = (1 + 10 * rand() / RAND_MAX);
	}


	cout << ilk.isim << " Size Gelen İlk Kartın Numarası: " << ilkkart1 << " Size Gelen İkinci Kartın Numarası: " << ikincikart1 << " \nToplamları İse " << ilkkart1 + ikincikart1 << endl;
	cout << ikinci.isim << " Size Gelen İlk Kartın Numarası: " << ilkkart2 << " Size Gelen İkinci Kartın Numarası: " << ikincikart2 << " \nToplamları İse " << ilkkart2 + ikincikart2 << endl;
	cout << " " << endl;

	cout << ilk.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
	cin >> sor;
	if (sor == 'e')
	{
		cout << "Üçüncü Kartınızın Numarası: " << ucuncukart1 << endl;
		cout << "Kartlarınızın Toplamı:" << ilkkart1 + ikincikart1 + ucuncukart1 << endl;
		if (ilkkart1 + ikincikart1 + ucuncukart1 > 21)
		{
			cout << ilk.isim << " Oyunu Kaybettiniz." << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 < 21)
		{
			cout << ilk.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
			cin >> sor;
			cout << " " << endl;
			if (sor == 'e')
			{
				cout << "Dördüncü Kartınızın Numarası: " << dorduncukart1 << endl;
				cout << "Kartlarınızın Toplamı:" << ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 << endl;
				if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 > 21)
				{
					cout << ilk.isim << " Oyunu Kaybettiniz." << endl;
				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 < 21)
				{
					cout << ilk.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
					cin >> sor;
					cout << " " << endl;
					if (sor == 'e')
					{
						cout << "Beşinci Kartınızın Numarası: " << besincikart1 << endl;
						cout << "Kartlarınızın Toplamı:" << ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 << endl;
						if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 > 21)
						{
							cout << ilk.isim << " Oyunu Kaybettiniz." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 < 21)
						{
							cout << ilk.isim << "Beş Kartta Sonuca Ulaşamadığınız için Kaybettiniz." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 == 21)
						{
							cout << "Tebrikler 21'e Ulaştığınız İçin Oyunu Kazandınız" << endl;
						}
					}
					else if (sor == 'h')
					{


					}

				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 == 21)
				{
					cout << "Tebrikler 21'e Ulaştığınız İçin Oyunu Kazandınız" << endl;
				}
			}
			else if (sor == 'h')
			{

			}
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 == 21)
		{
			cout << "Tebrikler 21'e Ulaştığınız İçin Oyunu Kazandınız" << endl;
		}
	}
	else if (sor == 'h')
	{

	}

	cout << ikinci.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
	cin >> sor;
	if (sor == 'e')
	{
		cout << "Üçüncü Kartınızın Numarası: " << ucuncukart2 << endl;
		cout << "Kartlarınızın Toplamı:" << ilkkart2 + ikincikart2 + ucuncukart2 << endl;
		if (ilkkart2 + ikincikart2 + ucuncukart2 > 21)
		{
			cout << ikinci.isim << " Oyunu Kaybettiniz." << endl;
		}
		else if (ilkkart2 + ikincikart2 + ucuncukart2 < 21)
		{
			cout << ikinci.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
			cin >> sor;
			cout << " " << endl;
			if (sor == 'e')
			{
				cout << "Dördüncü Kartınızın Numarası: " << dorduncukart2 << endl;
				cout << "Kartlarınızın Toplamı:" << ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 << endl;
				if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 > 21)
				{
					cout << ikinci.isim << " Oyunu Kaybettiniz." << endl;
				}
				else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 < 21)
				{
					cout << ikinci.isim << " Kart Çekmek İster Misin? (e/h)" << endl;
					cin >> sor;
					cout << " " << endl;
					if (sor == 'e')
					{
						cout << "Beşinci Kartınızın Numarası: " << besincikart2 << endl;
						cout << "Kartlarınızın Toplamı:" << ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 << endl;
						if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 > 21)
						{
							cout << ikinci.isim << " Oyunu Kaybettiniz." << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 < 21)
						{
							cout << "Beş Kartta Sonuca Ulaşamadığınız için Kaybettiniz." << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 == 21)
						{
							cout << "Tebrikler Oyunu Kazandınız" << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1)
						{
							cout << "Tebrikler Oyunu Kazandınız" << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " Oyunu Kazanmıştır." << endl;
						}
						else if (ilkkart1 + ikincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
						}

					}
					else if (sor == 'h')
					{
						if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 || ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 == 21 < ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << "21'e ulaştığı için kazanmıştır." << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 || ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 == 21 < ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1)
						{
							cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 != 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1)
						{
							cout << ikinci.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ikinci.isim << " olmuştur." << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ilk.isim << " olmuştur." << endl;
						}
						else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1)
						{
							cout << "Tebrikler Oyunu Kazandınız" << endl;
						}
						else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 + besincikart2)
						{
							cout << ilk.isim << " Oyunu Kazanmıştır." << endl;
						}
					}
					else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 == 21)
					{
						cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
					}
				}
				else if (ilkkart2 + ikincikart2 + ucuncukart2 == 21)
				{
					cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
				}
				else if (ilkkart1 + ikincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
				}
			}
			else if (sor == 'h')
			{
				if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 || ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 == 21 < ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << "21'e ulaştığı için kazanmıştır." << endl;
				}
				else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 || ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 == 21 < ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1)
				{
					cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
				}
				else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 != 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1)
				{
					cout << ikinci.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ikinci.isim << " olmuştur." << endl;
				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ilk.isim << " olmuştur." << endl;
				}
				else if (ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1)
				{
					cout << "Tebrikler Oyunu Kazandınız" << endl;
				}
				else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 + dorduncukart2)
				{
					cout << ilk.isim << " Oyunu Kazanmıştır." << endl;
				}

			}
		}
		else if (ilkkart2 + ikincikart2 + ucuncukart2 == 21)
		{
			cout << "Tebrikler Oyunu Kazandınız" << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 + dorduncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 + dorduncukart1 + besincikart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " " << ikinci.isim << " adlı oyuncusundan daha fazla bildiği için " << ilk.isim << " kazanmıştır." << endl;
		}
	}
	else if (sor == 'h')
	{
		if (ilkkart1 + ikincikart1 + ucuncukart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2 || ilkkart1 + ikincikart1 + ucuncukart1 == 21 < ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << "21'e ulaştığı için kazanmıştır." << endl;
		}
		else if (ilkkart2 + ikincikart2 + ucuncukart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1 || ilkkart2 + ikincikart2 + ucuncukart2 == 21 < ilkkart1 + ikincikart1 + ucuncukart1)
		{
			cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
		}
		else if (ilkkart2 + ikincikart2 + ucuncukart2 != 21 > ilkkart1 + ikincikart1 + ucuncukart1)
		{
			cout << ikinci.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ikinci.isim << " olmuştur." << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 != 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " Diğer kullanıcıya göre daha fazla bilmiştir ve kazanan " << ilk.isim << " olmuştur." << endl;
		}
		else if (ilkkart2 + ikincikart2 + ucuncukart2 == 21 > ilkkart1 + ikincikart1 + ucuncukart1)
		{
			cout << "Tebrikler Oyunu Kazandınız" << endl;
		}
		else if (ilkkart1 + ikincikart1 + ucuncukart1 == 21 > ilkkart2 + ikincikart2 + ucuncukart2)
		{
			cout << ilk.isim << " Oyunu Kazanmıştır." << endl;
		}

	}

	if (ilkkart1 + ikincikart1 == 21 > ilkkart2 + ikincikart2 || ilkkart1 + ikincikart1 == 21 < ilkkart2 + ikincikart2)
	{
		cout << ilk.isim << "21'e ulaştığı için kazanmıştır." << endl;
	}
	else if (ilkkart2 + ikincikart2 == 21 > ilkkart1 + ikincikart1 || ilkkart2 + ikincikart2 == 21 < ilkkart1 + ikincikart1)
	{
		cout << ikinci.isim << "21'e ulaştığı için kazanmıştır." << endl;
	}
}


