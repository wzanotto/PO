#include "punkt.h"

int main()
{
	//----------------ETAP 1 - 2 punkty ----------------
	// Uwaga: Jezeli do konstruktora przekazana zostala dla rozmiaru przestrzeni wartosc mniejsza od 0, ustawic rozmiar na 0.
	// Konstruktor przyjmujacy jeden parametr (rozmiar przestrzeni) ma ustawic wartosci wszystkich wspolrzednych punktu na 0.
	// Metoda Rozmiar() ma zwracac liczbe wspolrzednych punktu (rozmiar przestrzeni).
	// cout << P powinno wypisywac punkt w postaci: [el0 el1 el2 el3 ]

	cout << "----------------ETAP 1----------------" << endl;

	//Punkt P0(-3);
	//Punkt P1;
	//Punkt P2(3);
	//Punkt P3(3);
	//Punkt P4(6);

	//cout << "P0: "  << P0 << "\t\t\t ma elementow: " << P0.Rozmiar() << endl;
	//cout << "P1: "  << P1 << "\t\t\t ma elementow: " << P1.Rozmiar() << endl;
	//cout << "P2: "  << P2 << "\t\t ma elementow: " << P2.Rozmiar() << endl;
	//cout << "P3: "  << P3 << "\t\t ma elementow: " << P3.Rozmiar() << endl;
	//cout << "P4: "  << P4 << "\t ma elementow: " << P4.Rozmiar() << endl << endl;

	//----------------ETAP 2 - 2 punkty ----------------
	// Uwaga: zakladamy, ze indeks w operatorze[] jest poprawny
	// Metoda Ustaw() zwraca false jezeli podany rozmiar tablicy jest rozny od liczby wspolrzednych punktu,
	// wpp ustawia wartosci poszczegolnych wspolrzednych na podstawie tablicy i zwraca true.
	// Funkcja Odleglosc() zwraca -1 gdy punkty maja rozne liczby wspolrzednych, wpp zwraca odleglosc miedzy nimi

	cout << "----------------ETAP 2----------------" << endl;

	//double tab2[] = {3.5, 4, 10};
	//double tab3[] = {1, 12, 15.4};

	//P2.Ustaw(3, tab2);
	//P3.Ustaw(3, tab3);

	//cout << "P2: "  << P2 << endl;
	//cout << "P3: "  << P3 << endl << endl;

	//P2[0] = 2;
	//P2[2] = 7;
	//cout << "P2: "  << P2 << endl;

	//cout << "Odleglosc pomiedzy P2 i P3: " << Odlegosc(P2, P3) << "\t powinno byc: 11.643" << endl;
	//cout << "Odleglosc pomiedzy P2 i P4: " << Odlegosc(P2, P4) << "\t\t powinno byc: -1" << endl << endl;


	//----------------ETAP 3 - 2 punkty ----------------
	// Uwaga: Metoda Przesun(), ktora przyjmuje 2 parametry (dlugosc tablicy i tablice) zwraca false gdy dlugosc tablicy jest inna od ilosci wspolrzednych punktu,
	// wpp. przesuwa kazda wspolrzedna o odpowiednia wartosc z tablicy i zwraca true
	// Metoda Przesun() o jednym parametrze przesuwa wszystkie wspolrzedne o podana wartosc
	// Metoda Skaluj() przemnaza wszystkie wspolrzedne o podana wartosc
	// Metoda Odbij() odbija punkt symetrycznie wzgledem podanego punktu, zwraca false gdy wymiary punktow nie zgadzaja sie, wpp true

	cout << "----------------ETAP 3----------------" << endl;

	//cout << "P2: "  << P2 << endl;
	//cout << "P3: "  << P3 << endl;
	//cout << "P4: "  << P4 << endl << endl;

	//double t_p1[]={2.5, 1, -1.5};
	//double t_p2[]={1, 2, 3, 4, 5, 6};
	//cout << "P2 Przesun o [2.5, 1, -1.5]: \t\t"  << P2.Przesun(3, t_p1) << "\t powinno byc: 1" << endl;
	//cout << "P2: "  << P2 << endl << endl;
	//cout << "P2 Przesun o [1, 2, 3, 4, 5, 6]: \t"  << P2.Przesun(6, t_p2) << "\t powinno byc: 0" << endl;
	//cout << "P2: "  << P2 << endl << endl;
	//cout << "P4 Przesun o [1, 2, 3, 4, 5, 6]: \t"  << P4.Przesun(6, t_p2) << "\t powinno byc: 1" << endl;
	//cout << "P4: "  << P4 << endl << endl;

	//P3.Przesun(3.33);
	//cout << "P3 Przesun o 3.33: " << endl;
	//cout << "P3: " << P3 << endl << endl;

	//P2.Skaluj(2);
	//cout << "P2 Skaluj przez 2: " << endl;
	//cout << "P2: " << P2 << endl << endl;

	//P3.Skaluj(1.5);
	//cout << "P3 Skaluj przez 1.5: " << endl;
	//cout << "P3: " << P3 << endl << endl;

	//cout << "P2 odbite wzgledem [1, 2, 3, 4, 5, 6]: \t" << P2.Odbij(P4) << "\t powinno byc: 0" <<endl;
	//cout << "P2: " << P2 << endl << endl;

	//cout << "P3 odbite wzgledem [0, 0, 0]: \t\t" <<P3.Odbij(Punkt(3)) << "\t powinno byc: 1" <<endl;
	//cout << "P3: " << P3 << endl << endl;

	//double t_p3[]={1, 2, 1, 1, 3, 1};
	//Punkt P5(6);
	//P5.Ustaw(6, t_p3);
	//cout << "P4 odbite wzgledem [1, 2, 1, 1, 3, 1]: \t" <<P4.Odbij(P5) << "\t powinno byc: 1" <<endl;
	//cout << "P4: " << P4 << "\t powinno byc: [1 2 -1 -2 1 -4]"<< endl << endl;


	//----------------ETAP 4 - 2 punkty ----------------
	// Uwaga: zakadamy ze porownujemy tylko punkty w tym samym wymiarze
	// Porownujac bierzemy pod uwage odleglosc od srodka wspolrzednych (0, 0, 0, ...)

	cout << "----------------ETAP 4----------------" << endl;

	//cout << "P0: "  << P0 << endl;
	//cout << "P1: "  << P1 << endl;
	//cout << "P2: "  << P2 << endl;
	//cout << "P3: "  << P3 << endl;

	//cout << "P0 < P1  "  << (P0 < P1) << "\t powinno byc: 0" << endl;
	//cout << "P0 <= P1 "  << (P0 <= P1) << "\t powinno byc: 1" << endl;
	//cout << "P0 > P1  "  << (P0 > P1) << "\t powinno byc: 0" << endl;
	//cout << "P0 >= P1 "  << (P0 >= P1) << "\t powinno byc: 1" << endl;
	//cout << "P0 == P1 "  << (P0 == P1) << "\t powinno byc: 1" << endl;
	//cout << "P0 != P1 "  << (P0 != P1) << "\t powinno byc: 0" << endl;
	//cout << "P2 < P3  "  << (P2 < P3) << "\t powinno byc: 1" << endl;
	//cout << "P2 <= P3 "  << (P2 <= P3) << "\t powinno byc: 1" << endl;
	//cout << "P2 > P3  "  << (P2 > P3) << "\t powinno byc: 0" << endl;
	//cout << "P2 >= P3 "  << (P2 >= P3) << "\t powinno byc: 0" << endl;
	//cout << "P2 == P3 "  << (P2 == P3) << "\t powinno byc: 0" << endl;
	//cout << "P2 != P3 "  << (P2 != P3) << "\t powinno byc: 1" << endl << endl;


	//cout << "----------------Udalo sie!!!:)----------------\n" << endl;

	system("pause");
	return 0;
}