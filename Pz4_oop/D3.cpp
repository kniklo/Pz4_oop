#include "D3.h"
//constructors
D3::D3() : D1(), D2(), _atr9(0), _atr10(0) 
{
	cout << " default constructor D3" << endl;
}
D3::D3(int atr1, int atr2, float atr3, string atr4, string atr5, float atr6, string atr7, float atr8, int atr9, int atr10) :
	D1(atr1, atr2, atr3, atr4, atr5, atr6), D2(atr1, atr2, atr3, atr4, atr7, atr8),
	_atr9(atr9), _atr10(atr10)
{
}
D3::D3(const D3& D3)
{
	_atr9 = D3._atr9;
	_atr10 = D3._atr10;
}
D3::~D3(){}
//getters		
int D3::getatr9() { return _atr9; }
int D3::getatr10() { return _atr10; }
//setters	
void D3::setatr9(int atr9) { _atr9 = atr9; }
void D3::setatr10(int atr10) { _atr10 = atr10; }
// in out
ostream& operator<< (ostream& out, const D3& d3) {
	out << "atribut9 from D3: " << d3._atr9 << " artibut10 from D3: " << d3._atr10 << "\n";
	return out;
 }
istream& operator>> (istream& in, D3& d3) {
	cout << "Enter  int atribut7 for D3:";
	cin >> d3._atr9;
	cout << "Enter int atribut10 for D3:";
	cin >> d3._atr10;
	return in;
 }
//methods
void D3::m6()
{
	cout << "this is override function m6 from class D3\n";
}
void D3::m8()
{
	cout << "this is NOT VIRTUAL function m8 from class D3\n";
}

///на всякий случай написала но они ж приватные
void D3::m1()
{
	cout << "this is override function m1 from class D3\n";
}
void D3::m2()
{
	cout << "this is override function m2 from class D3\n";
}
void D3::m4()
{
	cout << "this is override function m4 from class D3\n";
}

