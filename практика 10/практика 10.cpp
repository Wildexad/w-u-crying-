#include <iostream>
#include <cmath>
using namespace std;

class type5 {
private:
    double B, C;
public:
    type5() {
        B = 0;
        C = 0;
    }
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6() {
        A = 0;
        B = 0;
        C = 0;
    }
    type6(double a1, double b1, double c1) {
       A = a1;
       B = b1;
       C = c1;
    }

    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
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
    type5 one_zero5(b, c);
    type6 zero_zero6(a, b, c);
    if (a == 0 && b != 0 && c != 0) {
        one_zero5.Get_answer();
        one_zero5.show();
    }
    if (b != 0 && c != 0 && a != 0) {
        zero_zero6.Get_answer();
        zero_zero6.show();
    }
    return 0;
}