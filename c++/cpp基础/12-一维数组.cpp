#include<iostream>
using namespace std;

int main12() {
	const int len = 3;
	string strArr[len] = { "李大炮", "李二炮", "李三炮" };

	for (int i = 0; i < 3; i++) {
		cout << strArr[i] << endl;
	}

	// 一位数组数组名 的用途

	//可以获取数组占用空间大小
	// 通过占用空间的总大小处以 数组中的第0个算出数组总长度

	cout << "总长度" << sizeof(strArr) / sizeof(strArr[0]) << endl;

	// 可以获取数组中的首地址
	cout << "数组首地址为" << strArr << endl;
	cout << "数组首地址为" << (int)strArr << endl;

	//查看数组中元素的地址
	cout << "数组第一个元素的地址为" << &strArr[0] << endl;
	cout << "数组第一个元素的地址为" << (int)&strArr[0] << endl;

	// 寻找最大值
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

	cout << "第" << id + 1 << "个小猪最重,体重为" << tizhong << endl;

	// 数组倒排
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


	// 冒泡排序

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