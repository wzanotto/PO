#include "plansza.h"

char t0[5] = {'a', 'h', 'v', 'h', 'a'};
char** t1;
int t1_n = 4;
int t1_m = 4;
char t2[6] = {'z', 'k', 'l', 'l', 'k', 'o'};

void fun()
{
	t1 = new (nothrow) char*[t1_n];
	if(!t1)
		exit(0);
	for (int i = 0; i < t1_n; ++i)
	{
		t1[i] = new (nothrow) char[t1_m];
		if(!t1[i])
			exit(0);
		for (int j = 0; j < t1_m; ++j)
			t1[i][j] = 'a' + rand()% 26;
	}
}

int main()
{
	//---------- ETAP 1 ----------
	//cout << "---------- ETAP 1 ----------" << endl;

	//fun();
	//Plansza P0;
	//Plansza P1(4, 5, t0);
	//Plansza P2(t1_n, t1_m, (char**)t1);
	//Plansza P3(2, 6, t2);

	//cout << "P0: \n" << P0 << endl;
	//cout << "P1: \n" << P1 << endl;
	//cout << "P2: \n" << P2 << endl;
	//cout << "P3: \n" << P3 << endl << endl;

	//---------- ETAP 2 ----------
	//cout << "---------- ETAP 2 ----------" << endl;

	//Plansza *P4 = new Plansza(P3);
	//Plansza P5;
	//P5 = *P4;
	//cout << "P4: \n" << *P4 << endl;
	//cout << "P5: \n" << P5 << endl << endl;

	////---------- ETAP 3 ----------
	//cout << "---------- ETAP 3 ----------" << endl;
	//cout << "Ile 'a' w P1: " << P1.Liczba_wystapien('a') << " (powinno byc: 8)" << endl;
	//cout << "Ile 'v' w P4: " << P4->Liczba_wystapien('v') << " (powinno byc: 0)" << endl;
	//cout << "Ile 'z' w P5: " << P5.Liczba_wystapien('z') << " (powinno byc: 2)" << endl << endl;

	//cout << "P1: \n" << P1 << endl;
	//cout << "Zamiana 'a' na 'v': " << P1.Zamien('a', 'v') << " (powinno byc: 8)" << endl;
	//cout << "P1: \n" << P1 << endl;

	//cout << "P2: \n" << P2 << endl;
	//cout << "Zamiana 'z' na 'o': " << P2.Zamien('z', 'o') << " (powinno byc: 0)" << endl;
	//cout << "P2: \n" << P2 << endl;

	//---------- ETAP 4 ----------
	//cout << "---------- ETAP 4 ----------" << endl;

	//cout << "Domyslny znak: " << Plansza::Pobierz_dom() << " (powinno byc 'x') "<< endl;
	//Plansza P6 (3, 3);
	//cout << "P6: \n" << P6 << endl;
	//Plansza::Ustaw_dom('o');
	//cout << "Domyslny znak: " << Plansza::Pobierz_dom() << " (powinno byc 'o') "<< endl;
	//Plansza P7 (2, 2);
	//cout << "P7: \n" << P7 << endl << endl;

	//---------- ETAP 5 ----------
	//cout << "---------- ETAP 5 ----------" << endl;

	//cout << P1.Sprawdz_Palindrom(0) << " (powinno byc 1) " << endl;
	//cout << P1.Sprawdz_Palindrom(1) << " (powinno byc 1) " << endl;
	//cout << P1.Sprawdz_Palindrom(5) << " (powinno byc 0) " << endl;

	//cout << "P1: \n" << P1 << endl;
	//cout << "Palindromy z P1: " << endl;
	//P1.Wypisz_Palindromy();
	//cout << endl;

	//cout << "P3: \n" << P3 << endl;
	//cout << "Palindromy z P3: " << endl;
	//P3.Wypisz_Palindromy();
	//cout << endl;
	//P3.Zamien('o', 'z');
	//cout << "P3: \n" << P3 << endl;
	//cout << "Palindromy z P3: " << endl;
	//P3.Wypisz_Palindromy();
	//cout << endl;

	//P2.Zamien('m', 'u');
	//P2.Zamien('e', 'h');
	//cout << "P2: \n" << P2 << endl;
	//cout << "Palindromy z P2: " << endl;
	//P2.Wypisz_Palindromy();
	//cout << endl;

	//cout << "KONIEC" << endl;
	system("pause");
	return 0;
}