

#include <iostream>
#include <locale.h>
#include<string>
#include<iomanip>
using namespace std;



int main()

{
	setlocale(LC_ALL, "Turkish");
	cout << "81 tane ilden, harf sayısına göre illeri rastgele ayıran program:" << endl;
	srand(time(NULL));


	string randomİl[15];

	string yeniİl = "";

	int indis[14] = { 0 };

	string iller[81] = { "istanbul","ankara","izmir","adana","adıyaman","afyonkarahisar","ağrı","aksaray","amasya",

		"antalya","ardahan","artvin","aydın","balıkesir","bartın","batman","bayburt","bilecik","bingöl","bitlis","bolu",

		"burdur","bursa","çanakkale","çankırı","çorum","denizli","diyarbakır","düzce",

		"edirne","elazığ","erzincan","erzurum","eskişehir","gaziantep","giresun","gümüşhane","hakkari","hatay","ığdır","ısparta","kahramanmaraş",

		"karabük","karaman","kars","kastamonu","kayseri","kırıkkale","kırklareli","kırşehir","kilis","kocaeli","konya","kütahya","malatya","manisa",

		"mardin","mersin","muğla","muş","nevşehir","niğde","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","şırnak","tekirdağ","tokat"

		,"trabzon","tunceli","şanlıurfa","uşak","van","yalova","yozgat","zonguldak" };

	int enKüçükİl = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enKüçükİl > iller[i].size())

			enKüçükİl = iller[i].size();

	}

	int enBüyükİl = iller[0].size();

	for (int i = 0; i < 81; i++)

	{

		if (enBüyükİl < iller[i].size())

			enBüyükİl = iller[i].size();

	}

	cout << "en küçük ilin harf sayısı :" << enKüçükİl << endl;

	cout << "en uzun ilin harf sayısı :" << enBüyükİl << endl;


	// Min ve Max degerleri arasi kadar doner


	int kosul = 0;
	while (int i = enKüçükİl <= enBüyükİl)//örneğin en küçük il 3 harfli ise 3'ten en büyük ilin harf sayısına kadar döner
	{




		cout << enKüçükİl << " " << "harfli illerden herhangi biri =";


		kosul = 0;
		// 100.000 deneme yapilacak, i kadar il arasindan değerleri eslesenler ile iller arasinda eslesen bulmak icin.
		for (int sayac1 = 0; sayac1 < 100000; sayac1++)

		{
			//cout << sayac1 << " ";
			int rastgeleİlSayisi = 0;
			//Rastgele il secer
			while (rastgeleİlSayisi < enKüçükİl)
			{

				int randomDeger = rand() % 81;

				randomİl[rastgeleİlSayisi] = iller[randomDeger];

				rastgeleİlSayisi++;
				//cout << randomİl[rastgeleİlSayisi] << endl; // random illeri yazdırır
			}

			int enKüçükİl2 = randomİl[0].length();

			//En kısa boyutlu ili bulur
			for (int sayac2 = 0; sayac2 < enKüçükİl; sayac2++)
			{
				if (enKüçükİl2 > randomİl[sayac2].length())//en kısa boyutlu ili bulmak için karşılaştırma yapar

					enKüçükİl2 = randomİl[sayac2].length();
			}
			//cout<<enKüçükİl2<<endl;
			// Bulunan boyut kadar doner ve her ilin harflerini kontrol eder
			for (int sayac2 = 0;sayac2 < enKüçükİl2;sayac2++)//örneğin enKüçükİl2=3 ise k=0,1,2 olur ve 3 tane yazdırır
			{
				yeniİl = "";

				// Illerin harflere karsilik gelen karakterleri toplar
				for (int x = 0; x < enKüçükİl;x++)

					yeniİl = yeniİl + randomİl[x].at(sayac2);

				// konsola yazar
				//cout << yeniİl << endl;

				// Cıkan sonucla illerinkini karsilastirir
				for (int sayac3 = 0; sayac3 < 81; sayac3++)

				{
					if (true) {
						if (iller[sayac3] == yeniİl)
						{
							cout << yeniİl << " ili bulundu" << endl;

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
		enKüçükİl++;
		if (kosul == 0 && i != enKüçükİl)
			cout << "bulunamadı" << endl;
	}
	return 0;
	system("pause");
}
