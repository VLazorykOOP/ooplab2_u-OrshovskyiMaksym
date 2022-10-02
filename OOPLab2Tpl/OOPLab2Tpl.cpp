#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	//Lab №2 task 4
	int r, x, y, r1;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	r = ((y << 4) + (y << 2) - ((x << 7) - (x << 3)) >> 5) + ((x + (y << 5)) >> 7) + ((x + y) >> 4);

	r1 = (20 * y - x * 120) / 32 + (x + y * 32) / 128 + (x + y) / 16;

	cout << "Result (without multiplication) = " << r << "\nResult = " << r1 << "\nx = " << x << "\ny = " << y << endl;
	return 0;

	/*Lab №2

	int a, b, x, d, c, y;
	int r, r1;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	cout << "Input d: ";
	cin >> d;


	x = b + (b << 1) + (b << 1) + (b << 5) + (((d << 5) - d + (a << 3) + (a << 2)) >> 11) - ((c << 6) + c) + (d << 4) - (d << 1);

	y = 37 * b + (((d * 31) + (12 * a)) / 2048) - (65 * c) + d * 14;

	cout << "Result (without multiplication) = " << x << "\nResult = " << y << "\na=" << a << "; b=" << b << "; c=" << c << "; d=" << d << ";" << endl;
	return 0;*/
}

