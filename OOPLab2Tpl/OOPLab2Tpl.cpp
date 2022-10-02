#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	//Lab №2 

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
	return 0;
}

