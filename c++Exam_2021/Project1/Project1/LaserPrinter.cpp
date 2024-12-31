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
		cout << "프린트하였습니다.";
	}
	else {
		cout << "토너가 부족하여 프린트할 수 없습니다.";
	}
}
void LaserPrinter::Show() {
	cout << printerName << " ," << companyName << " ," << "남은 종이 " << pages << "장 , 남은 토너 " << toner;
}