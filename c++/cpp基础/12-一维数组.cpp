#include<iostream>
using namespace std;

int main12() {
	const int len = 3;
	string strArr[len] = { "�����", "�����", "������" };

	for (int i = 0; i < 3; i++) {
		cout << strArr[i] << endl;
	}

	// һλ���������� ����;

	//���Ի�ȡ����ռ�ÿռ��С
	// ͨ��ռ�ÿռ���ܴ�С���� �����еĵ�0����������ܳ���

	cout << "�ܳ���" << sizeof(strArr) / sizeof(strArr[0]) << endl;

	// ���Ի�ȡ�����е��׵�ַ
	cout << "�����׵�ַΪ" << strArr << endl;
	cout << "�����׵�ַΪ" << (int)strArr << endl;

	//�鿴������Ԫ�صĵ�ַ
	cout << "�����һ��Ԫ�صĵ�ַΪ" << &strArr[0] << endl;
	cout << "�����һ��Ԫ�صĵ�ַΪ" << (int)&strArr[0] << endl;

	// Ѱ�����ֵ
	int arr[] = { 300,350,400,250,370 };
	int len1 = sizeof(arr) / sizeof(arr[0]);
	int id = 0;
	int tizhong = 0;
	for (int i = 0; i < len1; i++) {
		if (arr[i] > tizhong) {
			id = i;
			tizhong = arr[i];
		}
	}

	cout << "��" << id + 1 << "��С������,����Ϊ" << tizhong << endl;

	// ���鵹��
	int arr2[] = { 1,2,3,4,5,6 };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < (len2 % 2 != 0 ? len2 / 2 + 1 : len2 / 2); i++)
	{
		int z = arr2[len2 - i - 1];
		arr2[len2 - i - 1] = arr2[i];
		arr2[i] = z;
	}

	for (int i = 0; i < len2; i++) {
		cout << arr2[i] << endl;
	}


	// ð������

	int arr3[] = { 5,6,28,9,2,0,3 };
	int len3 = sizeof(arr3) / sizeof(arr3[0]);

	for (int i = 0; i < len3 - 1; i++)
	{
		for (int j = 0; j < len3 - 1 - i; j++) {
			if (arr3[j] < arr3[j + 1]) {
				int tem = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = tem;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr3[i] << endl;
	}


	system("pause");
	return 0;

}