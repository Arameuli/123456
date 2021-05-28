#pragma once
#include<iostream>
using namespace std;
class Fraction
{
private: int a, b;
	   int usj(Fraction& f);
	   int usg();
public:
	Fraction();
	Fraction(int a, int b);
	int geta();
	int getb();
	void seta(int a);
	void setb(int b);
	Fraction& operator +(Fraction& f);
	Fraction& operator -(Fraction& f);
	Fraction& operator *(Fraction& f);
	Fraction& operator /(Fraction& f);

	friend ostream& operator <<(ostream& out, Fraction& f);
	friend istream& operator >>(istream& in, Fraction& f);

};

