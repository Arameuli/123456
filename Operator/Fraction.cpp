#include "Fraction.h"
Fraction::Fraction() {

}
Fraction :: Fraction(int a, int b) {
	this->a = a;
	this->b = b;
}
int Fraction::geta() {
	return this->a;
}
int  Fraction::getb() {
	return this->b;
}
void Fraction:: seta(int a) {
	this->a = a;
}
void Fraction:: setb(int b) {
	this->b = b;
}

int Fraction :: usj(Fraction& f) {
	int a = this->b, b = f.b;
	int ans=(a>b) ? a : b;
	while (ans++) {
		if (ans % a == 0 && ans % b == 0) return ans;
	}

}
int Fraction :: usg() {
	int a = this->a, b = this->b;
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}

Fraction& Fraction :: operator +(Fraction& f) {
	Fraction tmp;
	tmp.b = this->usj(f);
	tmp.a = tmp.b / this->b * this->a + tmp.b / f.b * f.a;
	int k = tmp.usg();
	tmp.a = tmp.a / k;
	tmp.b = tmp.b / k;
	return tmp;
}
Fraction& Fraction :: operator -(Fraction& f) {
	Fraction tmp;
	tmp.b = this->usj(f);
	tmp.a = tmp.b / this->b * this->a - tmp.b / f.b * f.a;
	int k = tmp.usg();
	tmp.a = tmp.a / k;
	tmp.b = tmp.b / k;
	return tmp;
}
Fraction& Fraction :: operator *(Fraction& f) {
	Fraction tmp;
	tmp.a = this->a * f.a;
	tmp.b = this->b * f.b;
	int k = tmp.usg();
	tmp.a = tmp.a / k;
	tmp.b = tmp.b / k;
	return tmp;
}
Fraction& Fraction :: operator /(Fraction& f) {
	Fraction tmp;
	tmp.a = this->a * f.b;
	tmp.b = this->b * f.a;
	int k = tmp.usg();
	tmp.a = tmp.a / k;
	tmp.b = tmp.b / k;
	return tmp;
}
