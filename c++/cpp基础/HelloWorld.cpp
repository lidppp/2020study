#include <iostream>
using namespace std;
// 定义宏常量
#define day 7
int addNum(int num1, int num2) {
	return num1 + num2;
}

int main0() {
	// 事实证明define也可以定义在函数内部
	#define oneDay 1
	// 输出语句
	cout << "hello world" << endl;

	// 定义变量: 
	int a = 10;
	// 定义常量
	const int b = 20;
	cout << "变量a+常量b=" << a + b << endl;
	cout << "宏常量:一周有" << day << "天,第一天是星期" << oneDay << endl;

	// 测试结果 方法必须定义在调用之前,并且必须定义在main函数外面
	cout << "测试function" << addNum(11, 2) << endl;
	system("pause");

	return 0;
}

