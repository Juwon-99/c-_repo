#ifndef BASEPRINTER_H
#define BASEPRINTER_H
#include <string>
using namespace std;
class BasePrinter {
protected:
	string printerName;
	string companyName;
	int pages;
public:
	BasePrinter();
	BasePrinter(const string& _printerName, const string& _companyName, int _pages);
	BasePrinter(const BasePrinter& b);
	~BasePrinter();
	string getPrinterName();
	void setPrinterName(const string& _printerName);
	string getCompanyName();
	void setCompanyName(const string& _companyName);
	int getPages();
	void setPage(int _pages);
	virtual void Print(int printpages);
	virtual void Show();
};
#endif;