#include<iostream>
using namespace std;
int main8() {
	// if���
	// ����if���
	if (1 < 2) {
		cout << "1��2С" << endl;
	}

	// ����if���
	if (1 < 2) {
		cout << "1��2С" << endl;
	}
	else {
		cout << "1��2��" << endl;
	}

	// ������if���
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
		cout << b << "Ī���� һ��ҲĪ����" << endl;
		break;
	}


	system("pause");

	return 0;
}