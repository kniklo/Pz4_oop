#pragma once
#include "D1.h"
#include "D2.h"
class D3 :
    private D1,
    public D2
{
private:	
	int _atr9;
	int _atr10;
public:
	//constructors
	D3();
	D3(int atr1, int atr2, float atr3, string atr4, string _atr5, float _atr6, string _atr7, float _atr8, int _atr9, int _atr10);
	D3(const D3& D3);
	~D3();
	//getters		
	int getatr9();
	int getatr10();
	//setters	
	void setatr9(int atr9);
	void setatr10(int atr10);
	// in out
	friend ostream& operator<< (ostream& out, const D3& dot);
	friend istream& operator>> (istream& in, D3& dot);
	//methods
	virtual void m1() override;
	virtual void m2() override;
	virtual void m4() override;
	virtual void m6() override;
	void m8();
};
