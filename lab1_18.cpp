#include <iostream>
#include <cmath>
using namespace std;
double foo(double param_x){
    double y;
    // cout << x << endl;
    // Проверяем условия и вычисляем значение Y
    if (param_x < -3 || param_x > 7) {
        y = 0;
    } else if (-3 <= param_x && param_x <= -2) {
        // Вычисляем значение Y для прямой
        y = -1*param_x - 2;
    } else if (-2 < param_x && param_x <= 0) {
        // Вычисляем значение Y для полуокружности
        y = sqrt(1 - pow(param_x + 1, 2));
    } else if (0 < param_x && param_x < 4) {
        // Вычисляем значение Y для полуокружности
        y = -sqrt(4 - pow(param_x - 2, 2));
    } else if (4 <= param_x && param_x <= 6) {
        // Вычисляем значение Y для прямой
        y = -1.0 / 2.0 * (param_x - 4);
    } else if (6 < param_x && param_x <= 7) {
        // Вычисляем значение Y для прямой
        y = -1;
    }

    // Выводим значение Y
    cout << "Y = " << y << endl;
    return y;
}
int main() {
    // double x;
    double rez_y;
    for (double x=-3.0; x<=7; x = x + 0.5){
    // Запрашиваем у пользователя ввод значения X
        // cout << "X: ";
        // cin >> x;
        cout << "X = " << x  << endl;
        rez_y = foo(x);
        cout << "Y = " << rez_y << endl;
        cout << "----------------------" << endl;
    }

    return 0;
}
