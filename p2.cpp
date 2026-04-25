#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void p2() {
    double R, r, h, d, S, l, V;
    string s;
    cin >> R >> r >> h >> d;
    cin.ignore();
    getline(cin,s);
    l = sqrt(pow(h,2) + pow(R-r,2));
    S = 3.14159 * (R + r) * l;
    V = (1.0/3.0) * 3.14159 * h * (pow(R,2) + R*r + pow(r,2));
    cout << "Горный склон:\n"<<
        "- Объём: " << fixed << setprecision(2) << V << "\n" <<
        "- Площадь поверхности: " << fixed << setprecision(2) << S << "\n"<<
        "- Количество палаток: " << (long long)(S/d) << "\n"<<
        "- Гора: " << s;
}