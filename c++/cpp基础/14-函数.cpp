#include<iostream>
using namespace std;

// ����������
// ��ǰ���߱����������Ĵ���
// ��������д���,���Ƕ���ֻ����һ��
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