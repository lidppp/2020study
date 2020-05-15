#include<iostream>
using namespace std;
int main1()
{
	// 整型 short (2) int (4) long (4/8) long long(8)

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	
	cout << "short占用的字节" << sizeof(num1) << endl;
	cout << "int占用的字节" << sizeof(num2) << endl;
	cout << "long占用的字节" << sizeof(num3) << endl;
	cout << "long long占用的字节" << sizeof(num4) <<endl;

	system("pause");
	return 0;
}