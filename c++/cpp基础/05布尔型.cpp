#include<iostream>
using namespace std;
void main5() {

	//1.创建布尔类型
	bool t = true;
	bool f = false;

	// 输出 1           0
	cout << t << "\t" << f << endl;

	//查看内存空间
	// 1  1
	cout << sizeof(t) << "\t" << sizeof(f) << endl;


	system("pause");
}