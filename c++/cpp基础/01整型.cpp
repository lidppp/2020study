#include<iostream>
using namespace std;
int main1()
{
	// ���� short (2) int (4) long (4/8) long long(8)

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	
	cout << "shortռ�õ��ֽ�" << sizeof(num1) << endl;
	cout << "intռ�õ��ֽ�" << sizeof(num2) << endl;
	cout << "longռ�õ��ֽ�" << sizeof(num3) << endl;
	cout << "long longռ�õ��ֽ�" << sizeof(num4) <<endl;

	system("pause");
	return 0;
}