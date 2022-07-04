#include "B.h"
//constructors
B::B();
B::B(int atr1, int atr2, float atr3, string atr4);
B::B(const B& from_B);
B::~B();
//getters
int getatr1();
int getatr2();
float getatr3();
string getatr4();
//setters
void setatr1(int atr1);
void setatr2(int atr2);
void setatr3(float atr3);
void setatr4(string atr4);
// in out
friend ostream& operator<< (ostream& out, const B& dot);
friend istream& operator>> (istream& in, B& dot);
// methods
virtual void m1();
virtual void m2();
void m3();
