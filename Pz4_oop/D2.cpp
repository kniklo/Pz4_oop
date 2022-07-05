#include "D2.h"
//constructors
D2::D2() : B(), _atr7(""), _atr8(0.0)
{
}
D2::D2(int atr1, int atr2, float atr3, string atr4, string atr7, float atr8) : B(atr1, atr2, atr3, atr4), _atr7(atr7), _atr8(atr8)
{
}
D2::D2(const D2& from_D2) 
{
	_atr7 = from_D2._atr7;
	_atr8 = from_D2._atr8;
}
D2::~D2(){}
//getters		
string D2::getatr7() { return _atr7; }
float D2::getatr8() { return _atr8; }
//setters
void D2::setatr7(string atr7) { _atr7 = atr7; }
void D2:: setatr8(float atr8) { _atr8 = atr8; }
// in out
ostream& operator<< (ostream& out, const D2& d2)
{
	out << "atribut7 from D2: " << d2._atr7 << " artibut8 from D1: " << d2._atr8 << "\n";
 }
istream& operator>> (istream& in, D2& d2)
{
	cout << "Enter  string atribut7 for D2:";
	cin >> d2._atr7;
	cout << "Entre float atribut8 for D2:";
	cin >> d2._atr8;
 }
//methods

void D2::m6()
{
	cout << "this is function m6 from class D2\n";
}
void D2::m7()
{
	cout << "this is NOT VIRTUAL function m7 from class D2\n";
}

///на всякий случай написала но они ж приватные
void D2::m1()
{
	cout << "this is override function m1 from class D2\n";
}
void D2::m2()
{
	cout << "this is override function m2 from class D2\n";
}