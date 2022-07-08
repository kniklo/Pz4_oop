#include <iostream>
#include "B.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"


using namespace std;

int main()
{
	B base;
	cout << endl;
	D1 d1;
	cout << endl;
	D2 d2;
	cout << endl;
	D3 d3;
	cout << endl;
	D4 d4;
	cout << endl;

	B* p;
	p = &base;
	p->m1();
	p->m2();
	p->m3();
	cout << endl;
	p = &d1;
	p->m1();
	p->m2();
	d1.m4();
	d1.m5();
	cout << endl;
	D2* p2;
	p2 = &d2;
	p2->m6();
	p2->m7();
	cout << endl;
	p2 = &d3;
	p2->m6();
	d3.m8();
	cout << endl;
	p2 = &d4;
	p2->m6();
	d4.m9();
	
}

