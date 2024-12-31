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
		cout << "프린트하였습니다.";
	}
	else {
		cout << "용지가 부족하여 프린트할 수 없습니다.";
	}
	
}
void InkJetPrinter::Show() {
	cout << printerName << " ," << companyName << " ," << "남은 종이 " << pages << "장 , 남은 잉크 " << ink;
}