#include <iostream>

//tu dodac potrzebne #include


using namespace std;

//tu dodac funktor w etapie 3

int main()
{
	srand(1995);

	// ********** ETAP 1 ********** 
	// Utworzyc wektor v skladajacy sie z 10 losowych liczb calkowitych z zakresu [-10, 10],
	// wypisac wektor na ekran w odpowiednim formacie:
	// [1] wartosc pierwszego elementu
	// [2] wartosc drugiego elementu
	// itd.
	// Znalezc w wektorze element najmniejszy i najwiekszy i dodac je na koniec wektora,
	// wypisac.
	//
	// Wskazowka: 
	// liczby losowe (pseudolosowe) zwraca funkcja rand() (nie inicjowac generatora, chcemy miec znane sobie liczby)
	// zeby uzyskac liczbe losowa z zakresu [a, b] wystarczy wywolac: rand() % (b - a + 1) + a
	
	cout << "********** ETAP 1 **********" << endl;


	
	// ********** ETAP 2 ********** 
	// Na podstawie wektora v utworzyc liste l zawierajaca te same elementy,
	// wypisac na ekran w formacie analogicznym jak dla wektora,
	// wypisac na ekran od konca (uzywajac list<int>::reverse_iterator), zachowac poprawna numeracje (patrz output.txt),
	// nastepnie za kazdym elementem o wartosci bezwzglednej 8 wstawic 1,
	// wypisac

	cout << "\n********** ETAP 2 **********" << endl;

	

	// ********** ETAP 3 **********
	// Zdefiniowac funktor (czyli klasê) Podzielnosc zawierajaca
	//   - prywatne pole n typu int
	//   - publiczny konstruktor jednoparametrowy (parametrem zainicjowac pole n)
	//   - publiczny operator wywo³ania funkcji o jednym parametrze typu int i wyniku bool,
	//     zwracajacy true gdy podany parametr dzieli siê przez n.
	// Usunac z listy l wszystkie elementy podzielne przez 7 (uzywajac metody remove_if, ktorej argumentem jest odpowiedni funktor)
	// wypisac liste na ekran.

	cout << "\n********** ETAP 3 **********" << endl;



	// ********** ETAP 4 **********
	// Utworzyc mape m o 10 elemntach.
	// Kluczami maja byc liczby od 1 do 10.
	// Dla kazdego klucza k wartoscia ma byc liczba elementow z listy l, ktore dziela sie bez reszty przez k.
	// (w razie watpliowsci patrz output.txt)
	// Wypisac mape na konsole w postaci:
	// 1. (klucz, wartosc)
	// 2. (klucz, wartosc)
	// itd.
	cout << "\n********** ETAP 4 **********" << endl;
	


	system("pause");
	return 0;
}