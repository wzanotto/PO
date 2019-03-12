#include "samochod.h"
#include <iomanip>

Samochod::Samochod(string mar, string mod, int r):  rok(r)
{
	strncpy_s(marka,mar.c_str(),N-1); 
	marka[N]='\0';
	strncpy_s(model,mod.c_str(),N-1); 
	model[N]='\0';
}

string Samochod::Marka()
{
	return string(marka);
}

string Samochod::Model()
{
	return string(model);
}

int Samochod::Rok()
{
	return rok;
}

void Samochod::ZmienRok(int i)
{
	rok +=i;
}

bool Samochod::TenSamModel(const Samochod& S)
{
	return string(marka) == string(S.marka) && string(model) == string(S.model);
}

ostream& operator << (ostream& out, const Samochod& S)
{
	out << setw(10) << left << S.marka << setw (10) << left << S.model << setw (10) <<S.rok;
	return out;
}

bool operator > (const Samochod& S1, const Samochod& S2)
{
	if (string(S1.marka) > string(S2.marka))
		return true;
	if (string(S1.marka) == string(S2.marka) && string(S1.model) > string(S2.model))
		return true;
	if (string(S1.marka) == string(S2.marka) && string(S1.model) == string(S2.model) && S1.rok > S2.rok)
		return true;
	return false;
}