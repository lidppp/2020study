#include<iostream>
using namespace std;
#include<string>
void main7() {
	int a = 1;
	int b = ++a;

	//应该是输出 b = 1 , a = 2
	cout << a << "\t" << b << endl;

	int c = 10;
	int d = 6;

	cout << c/d << endl;

	double e = 2.3;

	cout << c / e << endl;


	system("pause");
}