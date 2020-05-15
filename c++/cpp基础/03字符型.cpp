#include<iostream>
using namespace std;

void main3() {
	/*
	注意: char 不可以用双引号, 注意 不可以存放字符串
	*/

	// 字符型变量创建方式
	char ch = 'a';
	cout << ch << endl; // 1

	// 字符型变量所占内存大小
	cout <<  sizeof(ch) << endl; // 1

	cout << sizeof(ch) << "asdasdsa\td" << "\n"; // 1

	// 字符型变量常见错误
	// 创建字符型变量时不可以双引号
	//char ch2 = "b";
	// 创建字符型变量时 单引号内只能有一个字符
	//char ch2 = 'asdasd';

	// 字符型变量对应的ascii码  a->97 A->65
	ch = 'b';
	cout << (int)ch << endl;

}