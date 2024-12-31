#include <iostream>
#include "LaserPrinter.h"
using namespace std;

LaserPrinter::LaserPrinter()
	:BasePrinter()
{
	toner = 0;
}
LaserPrinter::LaserPrinter(const string& _printerName, const string& _companyName, int _pages, int _toner)
	: BasePrinter(_printerName, _companyName, _pages)
{
	toner = _toner;
}
LaserPrinter::LaserPrinter(const LaserPrinter& l)
	: BasePrinter(l)
{
	toner = l.toner;
}
LaserPrinter::~LaserPrinter() {

}
int LaserPrinter::gettoner() {
	return toner;
}
void LaserPrinter::settoner(int _toner) {
	toner = _toner;
}
void LaserPrinter::Print(int printpages) {
	if (pages >= printpages && toner >= printpages) {
		pages = pages - printpages;
		toner = toner - printpages;
		cout << "����Ʈ�Ͽ����ϴ�.";
	}
	else {
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�.";
	}
}
void LaserPrinter::Show() {
	cout << printerName << " ," << companyName << " ," << "���� ���� " << pages << "�� , ���� ��� " << toner;
}