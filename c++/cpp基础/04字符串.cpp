#include<iostream>

using namespace std;

#include<string> //使用c++风格字符串要引用这个头文件

void main4() {
	// c语言风格字符串
	// 注意事项 char 字符串名[] 
	// 等号后面要用双引号包含起来字符串
	char cstr[] = "你好世界";
	cout << cstr << endl;

	// c++风格字符串
	// #include<string> 需要添加这个头文件
	string cppstr = "helloworld";
	cout << cppstr << endl;

}