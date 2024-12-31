#include <iostream>
#include "BasePrinter.h"
using namespace std;

BasePrinter::BasePrinter() {
	printerName = "None";
	companyName = "None";
	pages = 0;
}
BasePrinter::BasePrinter(const string& _printerName, const string& _companyName, int _pages) {
	printerName = _printerName;
	companyName = _companyName;
	pages = _pages;
}
BasePrinter::BasePrinter(const BasePrinter& b) {
	printerName = b.printerName;
	companyName = b.companyName;
	pages = b.pages;
}
BasePrinter::~BasePrinter() {

}
string BasePrinter::getPrinterName() {
	return printerName;
}
void BasePrinter::setPrinterName(const string& _printerName) {
	printerName = _printerName;
}
string BasePrinter::getCompanyName() {
	return companyName;
}
void BasePrinter::setCompanyName(const string& _companyName) {
	companyName = _companyName;
}
int BasePrinter::getPages() {
	return pages;
}
void BasePrinter::setPage(int _pages) {
	pages = _pages;
}
void BasePrinter::Print(int printpages) {
	//pages = pages - printpages;
	//cout << "프린트하였습니다.";
}
void BasePrinter::Show() {
	//cout << printerName << " ," << companyName << " ," << "남은 종이 " << pages << "장 , 남은 잉크 " << ink;
}