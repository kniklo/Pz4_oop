#pragma once
#include "B.h"
class D2 :
    private B
{
private:
	string _atr7;	
	float _atr8;
	virtual void m1() override; //т.к приватая связь с B
	virtual void m2() override;
public:
	//constructors
	D2();
	D2(int atr1, int atr2, float atr3, string atr4, string atr7, float atr8);
	D2(const D2& from_D2);
	~D2();
	//getters		
	string getatr7();
	float getatr8();
	//setters
	void setatr7(string atr7);
	void setatr8(float atr8);
	// in out
	friend ostream& operator<< (ostream& out, const D2& d2);
	friend istream& operator>> (istream& in, D2& d2);
	//methods
	
	virtual void m6();
	void m7();
};

