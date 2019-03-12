#include <iostream>
#include <string>
using namespace std;

const int N = 10;
class Samochod
{
	char marka[N+1];
	char model[N+1];
	int rok;
public:
	Samochod(string="", string="", int = 2000);

	//zwraca marke
	string Marka();

	//zwraca model
	string Model();

	//zwraca rok
	int Rok();

	//Zmienia rok produkcji o i.
	void ZmienRok(int i);

	//Zwraca true jezeli podany samochod ma ta sama marke i model
	bool TenSamModel(const Samochod&);

	friend ostream& operator << (ostream& out, const Samochod&);
	friend bool operator > (const Samochod&, const Samochod&);

};