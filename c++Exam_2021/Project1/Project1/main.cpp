#include <iostream>
#include <string>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

void playPrint(BasePrinter** BP, int printerNum, int printPages);

int main() {
	BasePrinter* BP[5] = { NULL };
	BP[0] = new InkJetPrinter("Officejet V40", "HP", 20, 30);
	BP[1] = new LaserPrinter("SCX-6x45", "SamsungElec", 15, 10);
	BP[2] = new LaserPrinter("SM56", "SamsungElec", 20, 30);
	BP[3] = new InkJetPrinter("KM5", "Emerson", 10, 10);
	BP[4] = new InkJetPrinter("Officejet V70", "HP", 30, 30);
	
	int printerNum, printPages;
	char answer;

	while (true) {
		cout << "프린터넘버[0 : 4]: "; cin >> printerNum;
		cout << "프린트할 페이지 수: "; cin >> printPages;
		playPrint(BP, printerNum, printPages);
		cout<< endl << "계속 프린트 하시겠습니까?[y/n]: "; cin >> answer;
		if (answer == 'n')
			break;
		cout << endl;
	}
	
	return 0;
}

void playPrint(BasePrinter** BP, int printerNum, int printPages) {
	BP[printerNum]->Print(printPages);
	cout << endl;
	BP[printerNum]->Show();
}
void CleanUp(BasePrinter** BP) {
	for (int i = 0; i < 5; i++) {
		delete BP[i]; BP[i] = NULL;
	}
}


