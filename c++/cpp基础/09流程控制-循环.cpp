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

	// 设置随机数种子
	srand((int)time(0));
	// 生成随机数  % 后面为最大值+1
	int a = rand() % 100;

	int userin = 0;
	while (true) {
		cout << "请输入数字" << endl;
		cin >> userin;
		if (userin > a) {
			cout << "比随机数大" << endl;
			cout << "---------------\n\n" << endl;
		}
		else if(userin < a){
			cout << "比随机数小" << endl;
			cout << "---------------\n\n" << endl;
		}
		else {
			cout << "猜对了" << endl;
			break;
		}

	}

	system("pause");
	return 0;
}