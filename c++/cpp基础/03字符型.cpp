#include<iostream>
using namespace std;

void main3() {
	/*
	ע��: char ��������˫����, ע�� �����Դ���ַ���
	*/

	// �ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl; // 1

	// �ַ��ͱ�����ռ�ڴ��С
	cout <<  sizeof(ch) << endl; // 1

	cout << sizeof(ch) << "asdasdsa\td" << "\n"; // 1

	// �ַ��ͱ�����������
	// �����ַ��ͱ���ʱ������˫����
	//char ch2 = "b";
	// �����ַ��ͱ���ʱ ��������ֻ����һ���ַ�
	//char ch2 = 'asdasd';

	// �ַ��ͱ�����Ӧ��ascii��  a->97 A->65
	ch = 'b';
	cout << (int)ch << endl;

}