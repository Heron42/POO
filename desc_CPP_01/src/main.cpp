#include <iostream>
#include <iomanip>
#include "Triangulo.hpp"

using namespace std;

int main() {

    double xa, ya, xb, yb, xc, yc;
    cin >> xa;
    cin >> ya;
    cin >> xb;
    cin >> yb;
    cin >> xc;
    cin >> yc;

    Triangulo t(xa, ya, xb, yb, xc, yc);

    cout << setprecision(5) << fixed << t.perimetro() << endl;

    return 0;
}
