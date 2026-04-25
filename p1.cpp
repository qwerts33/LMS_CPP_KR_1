#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
void p1() {
    double V, r, h, d;;
    string firma;
    cin >> r;
    cin >> h;
    cin >> d;
    cin >> firma;
    V = 3.14159 * (r*r) * h;
    cout << "Объём бочки: " << fixed << setprecision(2) << V << ", фирмы: " << firma <<"\n"<<
        "Количество бутылок: " << int(V/d);
}