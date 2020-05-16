#include<iostream>
using namespace std;

// 函数的声明
// 提前告诉编译器函数的存在
// 声明可以写多次,但是定义只能有一次
int max(int num1,int num2);


void changeNum(int* num) {
	
	cout << num << endl;

}

int main() {
	int numR = 10;
	changeNum(&numR);

	cout << &numR << endl;

	cout << max(3, 4) << endl;
	system("pause");
	return 0;

}

int max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}