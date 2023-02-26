#include <iostream>
#include <cmath>
#include "triangle.h"
#include "circle.h"
using namespace std;

int main()
{
	float a, b, c;
	cout << "enter 3 lines of tr :" << endl;
	cin >> a >> b >> c;
	Triangle ABC(a, b, c);

	//3 circles
	float r1, x1, y1;
	cout << "r and x, y" << endl;
	cin >> r1 >> x1 >> y1;
	circle circle1(r1, x1, y1);
	cout << "s=" << " " << circle1.square() << endl;
	cout << "around" <<" "<< circle1.triangle_around(a, b, c) << endl;
	cout << "in" <<" " << circle1.triangle_in(a, b, c) << endl;

	float r2, x2, y2;
	cout << "r and x, y";
	cin >> r2 >> x2 >> y2;
	circle circle2(r2, x2, y2);
	cout << "s=" << " " << circle2.square() << endl;
	cout << "around" << " " << circle2.triangle_around(a, b, c) << endl;
	cout << "in" << " " << circle2.triangle_in(a, b, c) << endl;

	double r3, x3, y3;
	cout << "r and x, y";
	cin >> r3 >> x3 >> y3;
	circle circle3(r3, x3, y3);
	cout << "s=" << " " << circle3.square() << endl;
	cout << "around" << " " << circle3.triangle_around(a, b, c) << endl;
	cout << "in" << " " << circle3.triangle_in(a, b, c) << endl;

	//пересечения
	cout << "1 and 2 check " << " " << circle1.check_circle(r2, x2, y2) << endl;
	cout << "2 and 3 check " << " " << circle2.check_circle(r3, x3, y3) << endl;
	cout << "1 and 3 check" << " " << circle1.check_circle(r3, x3, y3) << endl;
}