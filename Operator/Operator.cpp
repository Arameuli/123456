#include <iostream>
#include"Fraction.h"
using namespace std;
istream& operator >>(istream& in, Fraction& f) {
    in >> f.a >> f.b;
    return in;
}
ostream& operator <<(ostream& out, Fraction& f) {
    out << "  " << f.a << endl << "------" << " " << endl << "  " << f.b << endl;
     return out;
}
int main()
{
    Fraction f1, f2, f3;
    cin >> f1 >> f2;

    f3 = f1 + f2;
    cout << f3 << endl;

    f3 = f1 - f2;
    cout << f3 << endl;

    f3 = f1 * f2;
    cout << f3 << endl;

    f3 = f1 / f2;
    cout << f3 << endl;
    
}

