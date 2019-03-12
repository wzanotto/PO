#include "funkcje.h"

void Sortuj(Samochod* tab, int n)
{
	int k = n;
	do
	{
		for (int i = 0; i < k - 1; ++i)
			if (tab[i] > tab[i+1])
				swap(tab[i], tab[i+1]);
		--k;
	}
	while(k > 1);
}

int main()
{
	string plik_bin="samochody.sam";
	int n;

	//**************** ETAP 1 ****************
	cout << "**************** ETAP 1 ****************" << endl;
	Samochod* tab;
	try
	{
		tab = WczytajBin(plik_bin, n); 
		Wypisz(tab, n);
	}
	catch(const char* e)
	{
		cout << e << endl;
	}


	//**************** ETAP 2 ****************
	//cout << "\n**************** ETAP 2 ****************" << endl;
	//try
	//{
	//	PoprawPlikBin(plik_bin);
	//	cout << "\nSamochody po poprawie: " << endl;
	//	delete [] tab;
	//	tab = WczytajBin(plik_bin, n); 
	//	Wypisz(tab, n);
	//}
	//catch(const char* e)
	//{
	//	cout << e << endl;
	//}


	//**************** ETAP 3 ****************
	//cout << "\n**************** ETAP 3 ****************" << endl;
	//try
	//{
	//	Sortuj(tab,n);
	//	ZapiszTxt("samochody.txt", tab, n);		//3 punkty
	//	PrzeczytajTxt("samochody.txt");			//1 punkt
	//}
	//catch(const char* e)
	//{
	//	cout << e << endl;
	//}

	delete[] tab;
	system("pause");
	return 0;
}