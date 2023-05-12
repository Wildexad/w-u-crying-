#include <iostream>
#include <cmath>
using namespace std;

class type3 {
private:
    double C;
public:
    type3() {
        C = 0;
    }
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4() {
        A = 0;
        C = 0;
    }
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Введите переменные: " << endl;
    cin >> a >> b >> c;
    type3 eq3(b);
    type4 eq4(a, b);
    if (a == 0 && b != 0 && c == 0) {
        eq3.Get_answer();
        eq3.show();
    }
    if (a != 0 && b != 0 && c == 0) {
        eq4.Get_answer();
        eq4.show();
    }
    return 0;
}