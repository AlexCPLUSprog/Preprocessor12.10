#include <iostream>
#include <string>
#include "New.h"
using namespace std;


#if 2 > 10
#define PI 3.14		// 0 ����. � ����� ��� ������ ������
#define msg "Hello \
world!"
#elif 2 < 10
int global = 15;
#else
void func() {
	cout << "FUNC\n";
}
#endif


#define forever while (true)
#define number int

#define begin {
#define end }

#define hi cout << "Hello world!\n";\
		   cout << "Bye world!";
// ��� ������������ �����������,\
����������� �� ��������� �����

#define mult(a,b) (a * b) 
#define show(c,n) c n
#define crt_arr(p, t, n) p = new t[n]
#define repeat(n) for (int i = 0; i < n; i++)


#ifdef begin	// ���� ������ begin ����������

// ��������...

#endif


#ifndef E	// ���� ������� � �� ����������
#define E
#endif


#if 4 < 2
#error "����� ���-�� �� ��� :("
#endif

// ���������� ������ � ������
#define show_var(n) cout << #n " = " << n << endl

// ������������
#define concat(a,b) a ## b



#if 10 < 15

int main() begin
	setlocale(LC_ALL, "Russian");
	number n = 0, m;
	
	// ��������� �������������
	/*cout << PI << endl;
	// PI = 5; // ������
	cout << msg << endl;
	string str = msg;*/

	// ����������� �������������
	/*forever begin
		cout << "!";
		n++;
		if (n == 10)
			break;
	end

	// ������������ ����� forever
	#undef forever	// ����� ���� ������ ������������ ��� ������

	// forever{} // ������

	#define forever for(;;)*/

	// ������� �������������
	/*n = 11; m = 12;
	cout << mult(5, 4) << endl;
	cout << mult(1.5, 10) << endl;
	cout << mult(n, m) << endl;
	show(cout << , "Hello world!\n");

	int* px;
	// px = new int[15];
	crt_arr(px, int, 15){};

	repeat(15)
		cout << px[i] << ' ';
	cout << endl;*/

	// ��������� �������������
	/*int a = 7, b = 9;
	show_var(a);
	show_var(b);

	int ab = a + b;
	cout << "ab = " << concat(a, b) << endl;*/

	cout << __LINE__ << endl;	// 109

	cout << __FILE__ << endl;	// ���� � ������ �����

	//cout << __DATE__ << endl;	// ���� ������

	string date = __DATE__;
	cout << date << endl;

	int year = stoi(date.substr(date.rfind(' ') + 1));
	cout << "������ " << year << " ���\n";
	

	return 0;
end

#else
int main() {
	setlocale(LC_ALL, "Russian");

	return 0;
}



#endif