#include<iostream>
using namespace std;
int main2() {
	// 默认情况下在C++中会显示6位有效数字,如果需要表示更多位的数字需要特殊配置(还没学到暂时不讲)

	// 单精度: float
	// 双精度 double
	// 后面加f是为了告诉编译器 这个变量是单精度的浮点型,否则的话编译器会将3.14先转换为double类型 再转为float
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << sizeof(f1) << endl; // 4字节

	double b1 = 1232133.1415926;
	cout << "b1 = " << b1 << sizeof(b1) << endl; // 8字节

	// 科学计数法
	float f2 = 3e2; // 3 * 10^2
	cout << "f2 = " << f2 << endl; 

	float f3 = 3e-2; // 3 * 0.1^2
	cout << "f3 = " << f3 << endl; 


	system("pause");
	return 0;

}