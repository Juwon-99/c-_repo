#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H
#include "BasePrinter.h"
#include <string>
using namespace std;
class InkJetPrinter :public BasePrinter {
protected:
	int ink;
public:
	InkJetPrinter();
	InkJetPrinter(const string& _printerName, const string& _companyName, int _pages, int _ink);
	InkJetPrinter(const InkJetPrinter& b);
	~InkJetPrinter();
	int getink();
	void setink(int _ink);
	virtual void Print(int printpages);
	virtual void Show();
};
#endif;
