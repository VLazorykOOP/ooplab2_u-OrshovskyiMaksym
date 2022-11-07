#include <iostream>
#include <clocale>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {
    // Обчислення виразів з використанням побітових операцій
    // Calculation of expressions using bitwise operations 
    cout << " Calculation of expressions using bitwise operations  \n";
	
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

void task2()
{
    // Шифрування даних з використання побітових операцій 
    // Data encryption using bitwise operations
    cout << " Data encryption using bitwise operations  \n";
 using namespace std;
    void Shifruvanna(char S[128], unsigned short R[128])
    {
        unsigned char a;
        unsigned short b = 0, c = 0, i, t;
        short j;
        cin.get(S,128);
        for (i = 0; i < 128; i++){
            a=S[i];
            t=a;
            b |= t >> 4;
            b |= i << 4;
            t = a;
            b |= t << 11;
            t = 1;
            for(j = 0; j < 16; j++)
            {
                if(b & t){
                    if (c == 0) c = 1; else c = 0;
                }
        t <<=1;
            }
            b |= c << 15;
            R[i] = b;
    }
        
        int main()
        {
            cout << "Input text: "
            char S[128];
            unsigned short R[128];
            unsigned short i;
            cin.get(S, 128);
            Shifruvanna(S,128);
            for (i = 0; i < 128; i++)
                cout << hex << R[i] << endl;
            return 0;
        }
}
}
struct TextCode {
	unsigned short schkb	: 4;
	unsigned short posrow	: 7;
	unsigned short bitp	: 1;
	unsigned short mchkb	: 4;

void task3()
{
    
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
	unsigned char c;
	unsigned short r, t, i;
	short j;
	for (i = 0; i < 64; i++)            //
	{
		c = InS[i];                     // s - 0x73 = 0111 0011
		OutCoding[i].schkb = c >> 4;
		OutCoding[i].mchkb = c & 0x0f;
		OutCoding[i].posrow = i;
		r = pbit(c);
		t = pbit(static_cast<unsigned char>(i));
		OutCoding[i].bitp = r^t;
	}
    
}
    


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";
   int main()
    {
        int r, x, y, r1;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	r = ((y << 4) + (y << 2) - ((x << 7) - (x << 3)) >> 5) + ((x + (y << 5)) >> 7) + ((x + y) % 4);
	r1 = (20 * y - x * 120) / 32 + (x + y * 32) / 128 + (x + y) % 16;
	cout << "Result (without multiplication) = " << r << "\nResult = " << r1 << "\nx = " << x << "\ny = " << y << endl;
	return 0;
    }

}


