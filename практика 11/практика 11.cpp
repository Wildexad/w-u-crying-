#include <iostream>
#include <cmath>
using namespace std;

class type7 {
private:
    double B;
public:
    type7() {
        B = 0;
    }
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8() {
        A = 0;
        B = 0;
    }
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
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
    type7 z7(b);
    type8 z8(a, b);
    if (a == 0 && b != 0 && c == 0) {
        z7.Get_answer();
        z7.show();
    }
    if (a != 0 && b != 0 && c == 0) {
        z8.Get_answer();
        z8.show();
    }
    return 0;
}