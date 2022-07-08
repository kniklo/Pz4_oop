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
	D1 d1;
	D2 d2;
	D3 d3;
	D4 d4;

	B* p;
	p = &base;
	p->m1();
	p->m2();
	p->m3();

	d1.m1();
	d1.m2();
	d1.m3();
	d1.m4();
	d1.m5();
	
}

