#include<iostream>
using namespace std;

int main() {
	/*
		自我理解: cpp需要分配相同的内存空间 所以行数可以不输入但是列数必须输入 

		数据类型 数组名 [行数] [列数]
		数据类型 数组名 [行数] [列数] = {{数据1,数据2},{数据3,数据4}} *推荐使用
		数据类型 数组名 [行数] [列数] = {数据1,数据2,数据3,数据4}
		数据类型 数组名 [] [列数] = {数据1,数据2,数据3,数据4}
		

		***********

		我喜欢使用
		int arr1[][2] = { {1,2},{2,3} };

	*/

	int arr[2][2];
	int arr1[2][2] = { {1,2},{2,3} };
	int arr2[2][2] = { 1,2,2,3 };
	int arr3[][2] = { 1,2,2,3 };
	int arr4[][2] = { {1,2},{2,3} };

	// 二维数组数组名
	// 查看二维数组所占用的空间
	// 获取二维数组首地址

	cout << sizeof(arr1) << endl;

	cout << arr1 << endl;
	cout << (int)arr1 << endl;
	cout << "----------------" << endl;
	cout << (int)&arr1[0][1] << endl;
	cout << (int)&arr1[1][0] << endl;
	cout << "----------------" << endl;



	// 计算二位数组的行和列

	cout << "二维数组的行" << sizeof(arr1)/ sizeof(arr1[0]) << endl;
	cout << "二维数组的列" <<  sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;


	// 算出每个数组的总和
	// 创建数组
	int result[][3] = {
		{100,100,100},
		{70,50,100},
		{60,40,30}
	};

	// 算出行
	const int hang = sizeof(result) / sizeof(result[0]);
	// 算出列
	int lie = sizeof(result[0]) / sizeof(result[0][0]);
	//创建一个空数组
	int sum[hang];
	cout << "计算每行的总和" << endl;
	for (int i = 0; i < hang; i++) {
		// 创建一个临时总和
		int temsum = 0;
		for (int j = 0; j < lie; j++) {
			temsum += result[i][j];
		}
		// 将临时总和放入数组中
		sum[i] = temsum;
	}

	for (int i = 0; i < hang; i++) {
		cout << "第" << i << "行的总和为  " << sum[i] << endl;
	}


	system("pause");
	return 0;

}