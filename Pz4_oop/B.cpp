#include "B.h"
//constructors
B::B()
{
	_atr1 = _atr2  = 0;
	_atr3 = 0.0;
	_atr4 = " ";
	cout << " default constructor B" << endl;
}
B::B(int atr1, int atr2, float atr3, string atr4) {
	_atr1 = atr1;
	_atr2 = atr2;
	_atr3 = atr3;
	_atr4 = atr4;
	cout << " parametric constructor B" << endl;
}
B::B(const B& from_B) {
	_atr1 = from_B._atr1;
	_atr2 = from_B._atr2;
	_atr3 = from_B._atr3;
	_atr4 = from_B._atr4;
	cout << " copy constructor B" << endl;
}
B::~B(){}
//getters
int B:: getatr1() { return _atr1; }
int B::getatr2() { return _atr2; }
float B::getatr3() { return _atr3; }
string B::getatr4() { return _atr4; }
//setters
void B::setatr1(int atr1) { _atr1 = atr1; }
void B::setatr2(int atr2) { _atr2 = atr2; }
void B::setatr3(float atr3) { _atr3 = atr3; }
void B::setatr4(string atr4) { _atr4 = atr4; }
// in out
ostream& operator<< (ostream& out, const B& base){
	out << "atribut1 from B: " << base._atr1 << " atribut2 from B: " << base._atr2 << " atribut3 from B: " 
		<< base._atr3 << " atribut4 from B: " << base._atr4 << "\n";
	return out;
}
istream& operator>> (istream& in, B& base) {
	cout << "Enter atribut1 for B:";
	cin >> base._atr1;
	cout << "Enter atribut2 for B:";
	cin >> base._atr2;
	cout << "Enter atribut3 for B:";
	cin >> base._atr3;
	cout << "Enter atribut4 for B:";
	cin >> base._atr4;
	return in;
}
// methods
void B::m1() {
	cout << "this is function m1 from class B\n";
}
void B::m2() {
	cout << "this is function m2 from class B\n";
}
void B::m3() {
	cout << "this is function m3 from class B\n";
}
