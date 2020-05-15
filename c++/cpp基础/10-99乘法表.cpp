#include<iostream>
using namespace std;
int main10() {
	for (int i = 1; i < 10; i++) {
	
		for (int j = 1; j <= i; j++) {
		
			cout << j << "*" << i << "=" << (j*i < 10 ? "0":"") << j * i << "\t";
		
		}
		cout << "\n";
	
	}


	system("pause");
	return 0;
}