#include<iostream>
#include <ctime>
using namespace std;
int main9() {

	/*int a = 0;
	while (a < 10) {
		a++;
		cout << a << endl;
		if (a == 8) {
			break;
		}
	}
	do
	{
		a++;
		cout << a << endl;
	} while (a < 10);*/

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/

	// �������������
	srand((int)time(0));
	// ���������  % ����Ϊ���ֵ+1
	int a = rand() % 100;

	int userin = 0;
	while (true) {
		cout << "����������" << endl;
		cin >> userin;
		if (userin > a) {
			cout << "���������" << endl;
			cout << "---------------\n\n" << endl;
		}
		else if(userin < a){
			cout << "�������С" << endl;
			cout << "---------------\n\n" << endl;
		}
		else {
			cout << "�¶���" << endl;
			break;
		}

	}

	system("pause");
	return 0;
}