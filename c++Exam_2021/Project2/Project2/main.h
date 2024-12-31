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
	cout << "File �̸�: "; cin >> fname;
	ofstream output(fname);
	if (!output) {
		cout << "File open error" << endl;
		return 0;
	}
	while (true) {
		cout << "�� ���� �ؽ�Ʈ �Է�: "; cin >> text;
		length = text.size();
		cout << "�Էµ� �ؽ�Ʈ�� ���÷��̿� ȭ�Ͽ� �Ųٷ� ����ϱ�";
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
		cout << "��ӿ���?(Y/N): "; cin >> answer;
		if (answer == "n")
			break;
	}
	output.close();
	return 0;
}
