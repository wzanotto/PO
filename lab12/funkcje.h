#include "samochod.h"
#include <fstream>

//Wczytuje dane z pliku binarnego, zwraca utworzona dynamiczna tablice samochodow, ustawia wartosc n na liczbe wczytanych danych
Samochod* WczytajBin(string nazwa, int& n);

//Wypisuje wszystkie samochody z tablicy tab o rozmiarze n
void Wypisz(Samochod* tab, int n);

//W pliku binarnym poprawia dane dotyczace Toyot (zwieksza rok produkcji o 1)
void PoprawPlikBin(string nazwa);

//Zapisuje w odpowiednim formacie dane do pliku tekstowego 
//Dla kazdego modelu zapisuje:
//Marka model: rok1, rok2, rok3...
void ZapiszTxt(string nazwa, Samochod* tab, int n);

//Odczytuje dane z pliku tesktowego, wypisuje na konsole (bez formatowania, linia  po linii)
void PrzeczytajTxt(string nazwa);

