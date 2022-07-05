#pragma once
#include <iostream>
using namespace std;

class B
{
private:
	int _atr1;
	int _atr2;
	float _atr3;
	string _atr4;
public:
	//constructors
	B();
	B(int atr1, int atr2, float atr3, string atr4);
	B(const B& from_B);
	~B();
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
	friend ostream& operator<< (ostream& out, const B& base);
	friend istream& operator>> (istream& in, B& base);
	// methods
	virtual void m1();
	virtual void m2();
	void m3();
};

