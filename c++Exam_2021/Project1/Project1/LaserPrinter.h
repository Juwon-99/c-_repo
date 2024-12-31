#ifndef LASERPRINTER_H
#define LASERPRINTER_H
#include "BasePrinter.h"
#include <string>
using namespace std;
class LaserPrinter :public BasePrinter {
protected:
	int toner;
public:
	LaserPrinter();
	LaserPrinter(const string& _printerName, const string& _companyName, int _pages, int _toner);
	LaserPrinter(const LaserPrinter& l);
	~LaserPrinter();
	int gettoner();
	void settoner(int _toner);
	virtual void Print(int printpages);
	virtual void Show();
};
#endif;
