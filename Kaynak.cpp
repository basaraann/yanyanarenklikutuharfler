/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ									*
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ							*
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
**																			*
**				ÖDEV NUMARASI…...1											*
**				ÖÐRENCÝ ADI...............:Buðra Baþaran					*
**				ÖÐRENCÝ NUMARASI.:G211210015								*
**				DERS GRUBU…………:1.sýnýf A grubu								*
****************************************************************************/


#include <iostream>
#include <locale.h>
#include<string>
#include<iomanip>
using namespace std;



int main()

{
	setlocale(LC_ALL, "Turkish");
	cout << "81 tane ilden, harf sayýsýna göre illeri rastgele ayýran program:" << endl;
	srand(time(NULL));


	string randomÝl[15];

	string yeniÝl = "";

	int indis[14] = { 0 };

	string iller[81] = { "istanbul","ankara","izmir","adana","adýyaman","afyonkarahisar","aðrý","aksaray","amasya",

		"antalya","ardahan","artvin","aydýn","balýkesir","bartýn","batman","bayburt","bilecik","bingöl","bitlis","bolu",

		"burdur","bursa","çanakkale","çankýrý","çorum","denizli","diyarbakýr","düzce",

		"edirne","elazýð","erzincan","erzurum","eskiþehir","gaziantep","giresun","gümüþhane","hakkari","hatay","ýðdýr","ýsparta","kahramanmaraþ",

		"karabük","karaman","kars","kastamonu","kayseri","kýrýkkale","kýrklareli","kýrþehir","kilis","kocaeli","konya","kütahya","malatya","manisa",

		"mardin","mersin","muðla","muþ","nevþehir","niðde","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","þýrnak","tekirdað","tokat"

		,"trabzon","tunceli","þanlýurfa","uþak","van","yalova","yozgat","zonguldak" };

	int enKüçükÝl = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enKüçükÝl > iller[i].size())

			enKüçükÝl = iller[i].size();

	}

	int enBüyükÝl = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enBüyükÝl < iller[i].size())

			enBüyükÝl = iller[i].size();

	}

	cout << "en küçük ilin harf sayýsý :" << enKüçükÝl << endl;

	cout << "en uzun ilin harf sayýsý :" << enBüyükÝl << endl;


	// Min ve Max degerleri arasi kadar doner


	int kosul = 0;
	while (int i = enKüçükÝl <= enBüyükÝl)//örneðin en küçük il 3 harfli ise 3'ten en büyük ilin harf sayýsýna kadar döner
	{




		cout << enKüçükÝl << " " << "harfli illerden herhangi biri =";


		kosul = 0;
		// 100.000 deneme yapilacak, i kadar il arasindan deðerleri eslesenler ile iller arasinda eslesen bulmak icin.
		for (int sayac1 = 0; sayac1 < 100000; sayac1++)

		{
			//cout << sayac1 << " ";
			int rastgeleÝlSayisi = 0;
			//Rastgele il secer
			while (rastgeleÝlSayisi < enKüçükÝl)
			{

				int randomDeger = rand() % 81;

				randomÝl[rastgeleÝlSayisi] = iller[randomDeger];

				rastgeleÝlSayisi++;
				//cout << randomÝl[rastgeleÝlSayisi] << endl; // random illeri yazdýrýr
			}

			int enKüçükÝl2 = randomÝl[0].length();

			//En kýsa boyutlu ili bulur
			for (int sayac2 = 0; sayac2 < enKüçükÝl; sayac2++)
			{
				if (enKüçükÝl2 > randomÝl[sayac2].length())//en kýsa boyutlu ili bulmak için karþýlaþtýrma yapar

					enKüçükÝl2 = randomÝl[sayac2].length();
			}
			//cout<<enKüçükÝl2<<endl;
			// Bulunan boyut kadar doner ve her ilin harflerini kontrol eder
			for (int sayac2 = 0;sayac2 < enKüçükÝl2;sayac2++)//örneðin enKüçükÝl2=3 ise k=0,1,2 olur ve 3 tane yazdýrýr
			{
				yeniÝl = "";

				// Illerin harflere karsilik gelen karakterleri toplar
				for (int x = 0; x < enKüçükÝl;x++)

					yeniÝl = yeniÝl + randomÝl[x].at(sayac2);

				// konsola yazar
				//cout << yeniÝl << endl;

				// Cýkan sonucla illerinkini karsilastirir
				for (int sayac3 = 0; sayac3 < 81; sayac3++)

				{
					if (true) {
						if (iller[sayac3] == yeniÝl)
						{
							cout << yeniÝl << " ili bulundu" << endl;

							kosul = 1;
						}

					}
					if (kosul == 1)

						break;
				}
				if (kosul == 1)

					break;
			}
			if (kosul == 1)

				break;
		}
		enKüçükÝl++;
		if (kosul == 0 && i != enKüçükÝl)
			cout << "bulunamadý" << endl;
	}
	return 0;
	system("pause");
}
