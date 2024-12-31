#include <iostream>
#include <fstream>
#include <string>
#include "Stacktemplate.h"
using namespace std;

int main() {
	string fname;
	string answer;
	string text;
	int n, length;
	cout << "File 이름: "; cin >> fname;
	ofstream output(fname);
	if (!output) {
		cout << "File open error" << endl;
		return 0;
	}
	while (true) {
		cout << "한 줄의 텍스트 입력: "; cin >> text;
		length = text.size();
		cout << "입력된 텍스트를 디스플레이와 화일에 거꾸로 출력하기";
		Stack<char> f1(100);
		for (int i = 0; i < length; i++) {
			f1.push(text[i]);
		}
		n = f1.getTopIdx();
		for (int i = 0; i <= n; i++) {
			cout << f1.Pop() << " ";
			char a = f1.Pop();
			output << a;
		}
		cout << "계속여부?(Y/N): "; cin >> answer;
		if (answer == "n")
			break;
	}
	output.close();
	return 0;
}
