#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Atmosphere.h"

using namespace std;

int main()
{
    Atmosphere atm;
    double h = 36000;
    AtmosParams p = atm.getParams(h);
    cout << "h = " << h << endl;
    cout << "T = " << p.T << endl;
    cout << "P = " << p.P << endl;
    cout << "a = " << p.a << endl;
    cout << "g = " << p.g << endl;
    cout << "ro = " << p.ro << endl;
    cout << "n = " << p.n << endl;
    cout << "M = " << p.M << endl;

    return 0;
}
