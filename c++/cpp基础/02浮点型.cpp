#include<iostream>
using namespace std;
int main2() {
	// Ĭ���������C++�л���ʾ6λ��Ч����,�����Ҫ��ʾ����λ��������Ҫ��������(��ûѧ����ʱ����)

	// ������: float
	// ˫���� double
	// �����f��Ϊ�˸��߱����� ��������ǵ����ȵĸ�����,����Ļ��������Ὣ3.14��ת��Ϊdouble���� ��תΪfloat
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << sizeof(f1) << endl; // 4�ֽ�

	double b1 = 1232133.1415926;
	cout << "b1 = " << b1 << sizeof(b1) << endl; // 8�ֽ�

	// ��ѧ������
	float f2 = 3e2; // 3 * 10^2
	cout << "f2 = " << f2 << endl; 

	float f3 = 3e-2; // 3 * 0.1^2
	cout << "f3 = " << f3 << endl; 


	system("pause");
	return 0;

}