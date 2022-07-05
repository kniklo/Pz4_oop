#pragma once
#include "B.h"
class D1 :
    public B
{
private:    
    string _atr5;
    float _atr6;
public:
	//constructors
	D1();
	D1(int atr1, int atr2, float atr3, string atr4, string atr5, float atr6);
	D1(const D1& from_D1);
	~D1();
	//getters		
	string getatr5();
	float getatr6();
	//setters	
	void setatr5(string atr5);
	void setatr6(float atr6);
	// in out
	friend ostream& operator<< (ostream& out, const D1& d1);
	friend istream& operator>> (istream& in, D1& d1);
	//methods
	virtual void m1() override;
	virtual void m2() override;
	virtual void m4();
	void m5();
};

