#include <iostream>
using namespace std;
// ����곣��
#define day 7
int addNum(int num1, int num2) {
	return num1 + num2;
}

int main0() {
	// ��ʵ֤��defineҲ���Զ����ں����ڲ�
	#define oneDay 1
	// ������
	cout << "hello world" << endl;

	// �������: 
	int a = 10;
	// ���峣��
	const int b = 20;
	cout << "����a+����b=" << a + b << endl;
	cout << "�곣��:һ����" << day << "��,��һ��������" << oneDay << endl;

	// ���Խ�� �������붨���ڵ���֮ǰ,���ұ��붨����main��������
	cout << "����function" << addNum(11, 2) << endl;
	system("pause");

	return 0;
}

