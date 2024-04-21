#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Auto
{
	string marka;
	string modell;
	string rendszam;
	string szin;
	int ar;
	int km_ora_allas;
	int hengerurtartalom_cm3;
};

void Kiiratas(const Auto& param)
{
	cout << "A keresett aut� adatai: " << endl;
	cout << "\t" << "M�rka: " << param.marka << endl;
	cout << "\t" << "Modell: " << param.modell << endl;
	cout << "\t" << "Rendszam: " << param.rendszam << endl;
	cout << "\t" << "Sz�n: " << param.szin << endl;
	cout << "\t" << "�r: " << param.ar << " ft" << endl;
	cout << "\t" << "Km �ra �ll�sa: " << param.km_ora_allas << " km" << endl;
	cout << "\t" << "Henger�rtartalom: " << param.hengerurtartalom_cm3 << " cm3" << endl;
}

void Kereses(Auto kocsik[], int kocsik_merete)
{
	string bekert;
	cout << "Mi alapj�n szeretne keresni? (marka, modell, rendszam, szin, ar, km, hengerurtartalom)" << endl;
	cin >> bekert;

	if (bekert == "marka")
	{
		string keresett_marka;
		cout << "Adja meg a keresett m�rk�t:" << endl;
		cin >> keresett_marka;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].marka == keresett_marka)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs ilyen m�rk�j� aut�!" << endl;
		}
	}
	else if (bekert == "modell")
	{
		string keresett_modell;
		cout << "Adja meg a keresett modellt:" << endl;
		cin >> keresett_modell;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].modell == keresett_modell)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs ilyen modell� aut�!" << endl;
		}
	}
	else if (bekert == "rendszam")
	{
		string keresett_rend;
		cout << "Adja meg a keresett rendszamot:" << endl;
		cin >> keresett_rend;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].rendszam == keresett_rend)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs ilyen rendsz�m� aut�!" << endl;
		}
	}
	else if (bekert == "szin")
	{
		string keresett_szin;
		cout << "Adja meg a keresett sz�nt:" << endl;
		cin >> keresett_szin;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].szin == keresett_szin)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs ilyen sz�n� aut�!" << endl;
		}
	}
	else if (bekert == "ar")
	{
		int keresett_ar;
		cout << "Adja meg a maxim�lis �rat:" << endl;
		cin >> keresett_ar;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].ar <= keresett_ar)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs a megadott �rn�l olcs�bb aut�!" << endl;
		}
	}
	else if (bekert == "km")
	{
		int keresett_km;
		cout << "Adja meg a maxim�lis km �ra �ll�st:" << endl;
		cin >> keresett_km;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].km_ora_allas <= keresett_km)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs a megadott km-n�l kisebb aut�!" << endl;
		}
	}
	else if (bekert == "hengerurtartalom")
	{
		int keresett_cm3;
		cout << "Adja meg a minim�lis henger�rtartalmat:" << endl;
		cin >> keresett_cm3;
		bool talalt = false;

		for (int i = 0; i < kocsik_merete; i++)
		{
			if (kocsik[i].hengerurtartalom_cm3 >= keresett_cm3)
			{
				Kiiratas(kocsik[i]);
				talalt = true;
			}
		}
		if (talalt == false)
		{
			cout << "Nincs ilyen aut�!" << endl;
		}
	}
	else
	{
		cout << "Rossz keres�si sz�r�t adott meg!" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "hun");

	Auto kocsik[18] =
	{
		{"Audi", "A5", "KWD-498", "szurke", 2700000, 320000, 3000},
		{"Audi", "TT", "NJR-343", "sarga", 2100000, 250000, 1789},

		{"BMW", "3", "PJZ-929", "fekete", 950000, 174000, 1796},
		{"BMW", "6", "ESL-633", "szurke", 1800000, 167000, 4398},

		{"Chevrolet", "Camaro", "ABC-123", "kek", 18990000, 50416, 6162},
		{"Chevrolet", "Lacetti", "AEIB-989", "barna", 630000, 214345, 1598},

		{"Ford", "F-150", "AACT-704", "sotetkek", 25260300, 111127, 3490},
		{"Ford", "Fiesta", "PSW-663", "szurke", 649999, 290000, 1299},

		{"Hyundai", "Coupe", "RTM-842", "fekete", 1348000, 137000, 1975},
		{"Hyundai", "I30", "SEV-046", "feher", 2750000, 196732, 1396},

		{"Mazda", "B", "EYJ-086", "piros", 750000, 410000, 2184},
		{"Mazda", "MX5", "NDU-844", "kek", 1599999, 151140, 1598},

		{"Mercedes-AMG", "G", "SSW-028", "kek", 61999000, 41900, 3982},
		{"Mercedes-Benz", "S500", "PYL-357", "fekete", 1350000, 350000, 4966},

		{"Volvo", "C30", "RKW-200", "feher", 1390000, 337564, 2435},
		{"Volvo", "S60", "AEJS-812", "bordo", 6500000, 104633, 2953},

		{"Volkswagen", "Golf Sportsvan", "AAHS-607", "bronz", 3590000, 17300, 1598},
		{"Volkswagen", "Bog�r", "GNW-855", "fekete", 3400000, 63810, 1285}
	};

	int kocsik_merete = sizeof(kocsik) / sizeof(kocsik[0]);
	Kereses(kocsik, kocsik_merete);
	return 0;
}
