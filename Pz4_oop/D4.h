#pragma once
#include "D1.h"
#include "D2.h"
class D4 :
    private D1,
    public D2
{
private:
	int _atr11;
	int _atr12;
	virtual void m1() override; //?.? ????????? ????? ? D1
	virtual void m2() override; //
	virtual void m4() override; //
public:
	//constructors
	D4();
	D4(int atr1, int atr2, float atr3, string atr4, string _atr5, float _atr6, string _atr7, float _atr8, int _atr11, int _atr12);
	D4(const D4& D4);
	~D4();
	//getters		
	int getatr11();
	int getatr12();
	//setters	
	void setatr11(int atr11);
	void setatr12(int atr12);
	// in out
	friend ostream& operator<< (ostream& out, const D4& d4);
	friend istream& operator>> (istream& in, D4& dod4t);
	//methods
		
	virtual void m6() override; //?.? ??????. ? D2
	void m9();
};

