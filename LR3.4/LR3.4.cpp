// Lab_03_4.cpp
// < Ковальчук Олександр >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Вхідні координати точки
    double x;
    double y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Параметри кіл
    double a;
    double b;
    double R;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "R = "; cin >> R;

    // Перевірка сірого кольору
    bool inGray =

        (pow(x + a, 2) + pow(y + b, 2) <= pow(R, 2) && y > x) 
                                    ||
        (pow(x - a, 2) + pow(y - b, 2) <= pow(R, 2) && y < x);

    if (inGray)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cin.get();
    return 0;
}
