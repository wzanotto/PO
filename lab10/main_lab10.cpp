#include "tablica.h"
#include "ulamek.h"

const int N = 5;
const int M = 3;
const int N1 = 3;
const int M1 = 2;
int main()
{
	int tabInt[N*M] = {1, 2, 3,
					   2, 7, 4,
					   9, 4, 1,
					   2, 7, 7,
					   9, 4, 1};

	cout << "Zawartosc tablicy liczb calkowitych:" << endl;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
			cout << tabInt[i * M + j] << " ";
		cout << endl;
	}
	cout << endl;

	//----------------- ETAP 1 -----------------
	//cout << "----------------- ETAP 1 -----------------" << endl;
	//Tablica t(tabInt, N, M);

	//cout << "Wszystkie elementy: " << endl;
	//cout << t << endl;
	//cout << "Czy wiersze 0 i 4 sa rowne?" << endl;
	//cout << t.RowneWiersze(0, 4) << endl;
	//cout << "Czy wiersze 1 i 3 sa rowne?" << endl;
	//cout << t.RowneWiersze(1, 3) << endl;
	//cout << "Czy wiersze 2 i 4 sa rowne?" << endl;
	//cout << t.RowneWiersze(2, 4) << endl;

	//cout << "Nowa tablica" << endl;
	//Tablica t1(N1, M1);
	//cout << "Wszystkie elementy: " << endl;
	//cout << t1 << endl;
	//cout << endl;

	//----------------- ETAP 2 -----------------
	//Przed przyst¹pieniem do rozwi¹zania zakomentuj ETAP 1!!!
	//cout << "----------------- ETAP 2 -----------------" << endl;
	//Tablica<int> t(tabInt, N, M);

	//cout << "Wszystkie elementy: " << endl;
	//cout << t << endl;
	//cout << "Czy wiersze 0 i 4 sa rowne?" << endl;
	//cout << t.RowneWiersze(0, 4) << endl;
	//cout << "Czy wiersze 1 i 3 sa rowne?" << endl;
	//cout << t.RowneWiersze(1, 3) << endl;
	//cout << "Czy wiersze 2 i 4 sa rowne?" << endl;
	//cout << t.RowneWiersze(2, 4) << endl;

	//cout << "Nowa tablica" << endl;
	//Tablica<int> t1(N1, M1);
	//cout << "Wszystkie elementy: " << endl;
	//cout << t1 << endl;
	//cout << endl;

	//----------------- ETAP 3 -----------------
	//cout << "----------------- ETAP 3 -----------------" << endl;
	//Ulamek tabUlamek[N*M] = {Ulamek(1, 2), Ulamek(1, 3), Ulamek(4, 2),
	//						 Ulamek(1, 2), Ulamek(7, 2), Ulamek(9, 2),
	//						 Ulamek(4, 2), Ulamek(5, 8), Ulamek(6, 7),
	//						 Ulamek(1, 7), Ulamek(6, 2), Ulamek(8, 4),
	//						 Ulamek(2, 4), Ulamek(1, 3), Ulamek(2, 1)};
	//Tablica<Ulamek> u(tabUlamek, N, M);

	//cout << "Wszystkie elementy: " << endl;
	//cout << u << endl;
	//cout << "Czy wiersze 0 i 4 sa rowne?" << endl;
	//cout << u.RowneWiersze(0, 4) << endl;
	//cout << "Czy wiersze 0 i 1 sa rowne?" << endl;
	//cout << u.RowneWiersze(0, 1) << endl;
	//cout << "Czy wiersze 2 i 4 sa rowne?" << endl;
	//cout << u.RowneWiersze(2, 4) << endl;

	//cout << "Nowa tablica" << endl;
	//Tablica<Ulamek> u1(N1, M1);
	//cout << "Wszystkie elementy: " << endl;
	//cout << u1 << endl;
	//cout << endl;

	//----------------- ETAP 4 -----------------
	//cout << "----------------- ETAP 4 -----------------" << endl;
	//
	////Dodaj obsluge wyjatkow
	//
	//Tablica<int> t2(N, -9);
	//Tablica<int> t2(tabInt, -6, M);
	//Ulamek ulamek(5, 0);

	system("pause");
	return 0;
}