#include "D1.h"
//constructors
D1::D1() : B(), _atr5(""), _atr6(0.0)
{
	cout << " default constructor D1" << endl;
}
D1::D1(int atr1, int atr2, float atr3, string atr4, string atr5, float atr6) : B(atr1, atr2, atr3, atr4), _atr5(atr5), _atr6(atr6)
{
}
D1::D1(const D1& from_D1)
{
	_atr5 = from_D1._atr5;
	_atr6 = from_D1._atr6;
}
D1::~D1(){}
//getters		
string D1::getatr5() { return _atr5; }
float D1::getatr6() { return _atr6; }
//setters	
void D1::setatr5(string atr5) { _atr5 = atr5; }
void D1::setatr6(float atr6) { _atr6 = atr6; }
// in out
ostream& operator<< (ostream& out, const D1& d1) {
	out << "atribut5 from D1: " << d1._atr5 << " artibut6 from D1: " << d1._atr6 << "\n";
	return out;
 }
istream& operator>> (istream& in, D1& d1) {
	cout << "Enter  string atribut5 for D1:";
	cin >> d1._atr5;
	cout << "Entre float atribut6 for D1:";
	cin >> d1._atr6;
	return in;
 }
//methods
void D1::m1()
{
	cout << "this is override function m1 from class D1\n";
}
void D1::m2()
{
	cout << "this is override function m2 from class D1\n";
}
void D1::m4()
{
	cout << "this is function m4 from class D1\n";
}
void D1::m5()
{
	cout << "this is not virtual function m5 from class D1\n";
}