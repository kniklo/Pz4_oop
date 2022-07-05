#include "D4.h"
//constructors
D4::D4() : D1(), D2(), _atr11(0), _atr12(0)
D4::D4(int atr1, int atr2, float atr3, string atr4, string atr5, float atr6, string atr7, float atr8, int atr11, int atr12) :
	D1(atr1, atr2, atr3, atr4, atr5, atr6), D2(atr1, atr2, atr3, atr4, atr7, atr8),
	_atr11(atr11), _atr12(atr12)
{
}
D4::D4(const D4& D4)
{
	_atr11 = D4._atr11;
	_atr12 = D4._atr12;
}
D4::~D4() {}
//getters		
int D4::getatr11() { return _atr11; }
int D4::getatr12() { return _atr12; }
//setters	
void D4::setatr11(int atr11) { _atr11 = atr11; }
void D4::setatr12(int atr12) { _atr12 = atr12; }
// in out
ostream& operator<< (ostream& out, const D4& d4)
{
	out << "atribut11 from D4: " << d4._atr11 << " artibut12 from D4: " << d4._atr12 << "\n";
 }
istream& operator>> (istream& in, D4& d4)
{
	cout << "Enter  int atribut11 for D4:";
	cin >> d4._atr11;
	cout << "Enter int atribut12 for D4:";
	cin >> d4._atr12;
 }
//methods

void D4::m6()
{
	cout << "this is override function m6 from class D4\n";
 }
void D4::m9()
{
	cout << "this is NOT VIRTUAL function m9 from class D4\n";
}

///на всякий случай написала но они ж приватные
void D4::m1()
{
	cout << "this is override function m1 from class D4\n";
 }
void D4::m2()
{
	cout << "this is override function m2 from class D4\n";
 }
void D4::m4()
{
	cout << "this is override function m4 from class D4\n";
 }