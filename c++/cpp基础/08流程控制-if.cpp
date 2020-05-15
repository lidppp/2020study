#include<iostream>
using namespace std;
int main8() {
	// if语句
	// 单行if语句
	if (1 < 2) {
		cout << "1比2小" << endl;
	}

	// 多行if语句
	if (1 < 2) {
		cout << "1比2小" << endl;
	}
	else {
		cout << "1比2大" << endl;
	}

	// 多条件if语句
	int c = 0;
	cin >> c;
	if (c > 600) {
		cout << c << "\t" << 1 << endl;
	}
	else if ( 500 < c && c < 600) {
		cout << c << "\t" << 2 << endl;
	}
	else{
		cout << c << "\t" << 3 << endl;
	}

	int a = 10; 
	int b = 20;
	(a > b ? a : b)= 100;
	cout << a << endl;
	cout << b << endl;

	cin >> b;
	switch (b)
	{
	case 10:
	case 9:
		cout << b  << 1 << endl;
		break;
	case 8:
	case 7:
		cout << b << 2 << endl;
		break;
	default:
		cout << b << "莫得啦 一滴也莫得啦" << endl;
		break;
	}


	system("pause");

	return 0;
}