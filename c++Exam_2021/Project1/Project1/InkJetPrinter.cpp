#include <iostream>
#include "InkJetPrinter.h"
using namespace std;

InkJetPrinter::InkJetPrinter()
	:BasePrinter()
{
	ink = 0;
}
InkJetPrinter::InkJetPrinter(const string& _printerName, const string& _companyName, int _pages, int _ink)
	:BasePrinter(_printerName, _companyName, _pages)
{
	ink = _ink;
}
InkJetPrinter::InkJetPrinter(const InkJetPrinter& i)
	:BasePrinter(i)
{
	ink = i.ink;
}
InkJetPrinter::~InkJetPrinter() {

}
int InkJetPrinter::getink() {
	return ink;
}
void InkJetPrinter::setink(int _ink) {
	ink = _ink;
}
void InkJetPrinter::Print(int printpages) {
	if (pages >= printpages && ink >= printpages) {
		pages = pages - printpages;
		ink = ink - printpages;
		cout << "����Ʈ�Ͽ����ϴ�.";
	}
	else {
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.";
	}
	
}
void InkJetPrinter::Show() {
	cout << printerName << " ," << companyName << " ," << "���� ���� " << pages << "�� , ���� ��ũ " << ink;
}