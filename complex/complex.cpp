// complex.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include<iostream>
using namespace std;
class CCOmplex {
public:
	double real, imag;
	CCOmplex()
	{
		real = 10;
		imag = 20;
		cout << "���캯��" << real << "+" << imag << "i" << endl;
	}
	void setplace(double r, double m)
	{
		real = r;
		imag = m;
	}
	CCOmplex(const  CCOmplex & c)
	{
		real = c.real * 2;
		imag = c.imag * 2;
		cout << "���ƹ��캯��" << real << "+" << imag << "i" << endl;
	}
	void display()
	{
		cout << real << "+" << imag << "i" << endl;
	}
};
CCOmplex fun(CCOmplex ot)
{
	ot.display();
	return ot;
}

int main()
{
	CCOmplex oc1, oc3;
	oc1.display();
	oc3.display();
	oc1.setplace(20, 30);
	CCOmplex oc2(oc1);
	oc1.display();
	oc2.display();
	//fun(oc2);
	oc3 = fun(oc2);
	oc3.display();
	return 0;
}