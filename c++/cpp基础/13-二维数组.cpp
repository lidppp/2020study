#include<iostream>
using namespace std;

int main() {
	/*
		�������: cpp��Ҫ������ͬ���ڴ�ռ� �����������Բ����뵫�������������� 

		�������� ������ [����] [����]
		�������� ������ [����] [����] = {{����1,����2},{����3,����4}} *�Ƽ�ʹ��
		�������� ������ [����] [����] = {����1,����2,����3,����4}
		�������� ������ [] [����] = {����1,����2,����3,����4}
		

		***********

		��ϲ��ʹ��
		int arr1[][2] = { {1,2},{2,3} };

	*/

	int arr[2][2];
	int arr1[2][2] = { {1,2},{2,3} };
	int arr2[2][2] = { 1,2,2,3 };
	int arr3[][2] = { 1,2,2,3 };
	int arr4[][2] = { {1,2},{2,3} };

	// ��ά����������
	// �鿴��ά������ռ�õĿռ�
	// ��ȡ��ά�����׵�ַ

	cout << sizeof(arr1) << endl;

	cout << arr1 << endl;
	cout << (int)arr1 << endl;
	cout << "----------------" << endl;
	cout << (int)&arr1[0][1] << endl;
	cout << (int)&arr1[1][0] << endl;
	cout << "----------------" << endl;



	// �����λ������к���

	cout << "��ά�������" << sizeof(arr1)/ sizeof(arr1[0]) << endl;
	cout << "��ά�������" <<  sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;


	// ���ÿ��������ܺ�
	// ��������
	int result[][3] = {
		{100,100,100},
		{70,50,100},
		{60,40,30}
	};

	// �����
	const int hang = sizeof(result) / sizeof(result[0]);
	// �����
	int lie = sizeof(result[0]) / sizeof(result[0][0]);
	//����һ��������
	int sum[hang];
	cout << "����ÿ�е��ܺ�" << endl;
	for (int i = 0; i < hang; i++) {
		// ����һ����ʱ�ܺ�
		int temsum = 0;
		for (int j = 0; j < lie; j++) {
			temsum += result[i][j];
		}
		// ����ʱ�ܺͷ���������
		sum[i] = temsum;
	}

	for (int i = 0; i < hang; i++) {
		cout << "��" << i << "�е��ܺ�Ϊ  " << sum[i] << endl;
	}


	system("pause");
	return 0;

}