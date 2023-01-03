/****************************************************************************
**					SAKARYA �N�VERS�TES�									*
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�				*
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�							*
**				          PROGRAMLAMAYA G�R��� DERS�						*
**																			*
**				�DEV NUMARASI�...1											*
**				��RENC� ADI...............:Bu�ra Ba�aran					*
**				��RENC� NUMARASI.:G211210015								*
**				DERS GRUBU����:1.s�n�f A grubu								*
****************************************************************************/


#include <iostream>
#include <locale.h>
#include<string>
#include<iomanip>
using namespace std;



int main()

{
	setlocale(LC_ALL, "Turkish");
	cout << "81 tane ilden, harf say�s�na g�re illeri rastgele ay�ran program:" << endl;
	srand(time(NULL));


	string random�l[15];

	string yeni�l = "";

	int indis[14] = { 0 };

	string iller[81] = { "istanbul","ankara","izmir","adana","ad�yaman","afyonkarahisar","a�r�","aksaray","amasya",

		"antalya","ardahan","artvin","ayd�n","bal�kesir","bart�n","batman","bayburt","bilecik","bing�l","bitlis","bolu",

		"burdur","bursa","�anakkale","�ank�r�","�orum","denizli","diyarbak�r","d�zce",

		"edirne","elaz��","erzincan","erzurum","eski�ehir","gaziantep","giresun","g�m��hane","hakkari","hatay","��d�r","�sparta","kahramanmara�",

		"karab�k","karaman","kars","kastamonu","kayseri","k�r�kkale","k�rklareli","k�r�ehir","kilis","kocaeli","konya","k�tahya","malatya","manisa",

		"mardin","mersin","mu�la","mu�","nev�ehir","ni�de","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","��rnak","tekirda�","tokat"

		,"trabzon","tunceli","�anl�urfa","u�ak","van","yalova","yozgat","zonguldak" };

	int enK���k�l = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enK���k�l > iller[i].size())

			enK���k�l = iller[i].size();

	}

	int enB�y�k�l = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enB�y�k�l < iller[i].size())

			enB�y�k�l = iller[i].size();

	}

	cout << "en k���k ilin harf say�s� :" << enK���k�l << endl;

	cout << "en uzun ilin harf say�s� :" << enB�y�k�l << endl;


	// Min ve Max degerleri arasi kadar doner


	int kosul = 0;
	while (int i = enK���k�l <= enB�y�k�l)//�rne�in en k���k il 3 harfli ise 3'ten en b�y�k ilin harf say�s�na kadar d�ner
	{




		cout << enK���k�l << " " << "harfli illerden herhangi biri =";


		kosul = 0;
		// 100.000 deneme yapilacak, i kadar il arasindan de�erleri eslesenler ile iller arasinda eslesen bulmak icin.
		for (int sayac1 = 0; sayac1 < 100000; sayac1++)

		{
			//cout << sayac1 << " ";
			int rastgele�lSayisi = 0;
			//Rastgele il secer
			while (rastgele�lSayisi < enK���k�l)
			{

				int randomDeger = rand() % 81;

				random�l[rastgele�lSayisi] = iller[randomDeger];

				rastgele�lSayisi++;
				//cout << random�l[rastgele�lSayisi] << endl; // random illeri yazd�r�r
			}

			int enK���k�l2 = random�l[0].length();

			//En k�sa boyutlu ili bulur
			for (int sayac2 = 0; sayac2 < enK���k�l; sayac2++)
			{
				if (enK���k�l2 > random�l[sayac2].length())//en k�sa boyutlu ili bulmak i�in kar��la�t�rma yapar

					enK���k�l2 = random�l[sayac2].length();
			}
			//cout<<enK���k�l2<<endl;
			// Bulunan boyut kadar doner ve her ilin harflerini kontrol eder
			for (int sayac2 = 0;sayac2 < enK���k�l2;sayac2++)//�rne�in enK���k�l2=3 ise k=0,1,2 olur ve 3 tane yazd�r�r
			{
				yeni�l = "";

				// Illerin harflere karsilik gelen karakterleri toplar
				for (int x = 0; x < enK���k�l;x++)

					yeni�l = yeni�l + random�l[x].at(sayac2);

				// konsola yazar
				//cout << yeni�l << endl;

				// C�kan sonucla illerinkini karsilastirir
				for (int sayac3 = 0; sayac3 < 81; sayac3++)

				{
					if (true) {
						if (iller[sayac3] == yeni�l)
						{
							cout << yeni�l << " ili bulundu" << endl;

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
		enK���k�l++;
		if (kosul == 0 && i != enK���k�l)
			cout << "bulunamad�" << endl;
	}
	return 0;
	system("pause");
}
