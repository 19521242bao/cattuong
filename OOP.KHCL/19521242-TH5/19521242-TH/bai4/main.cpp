#include<iostream>
#include<typeinfo>
#include"Ellipse.h"
using namespace std;
void Input(Ellipse*& elip) {
	int CatchKey;
	cout << "Press 1 to input Ellipse.\n";
	cout << "Press 2 to input Circle.\n";
	while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2) {
		cout << "Just press in range 1,2. Again: ";
	}
	if (CatchKey == 1) {
		elip->Ellipse::Set();
	}
	else {
		elip = new Circle;
		elip->Set();
	}
}
int main() {
	Ellipse* elip;
	elip = new Ellipse;
	int CatchKey;
	do {
		cout << "Press 1 to input.\n";
		cout << "Press 2 to Print.\n";
		cout << "Press 3 to exit.\n";
		while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3) {
			cout << "Just press in range 1,2,3. Again: ";
		}
		switch (CatchKey)
		{
		case 1:
			Input(elip);
			break;
		case 2:
			cout << "Print: \n";
			if (typeid(elip).name() == typeid(Ellipse*).name()) {
				elip->Ellipse::Print();
			}
			else {
				elip->Print();
			}
		default:
			break;
		}
	} while (CatchKey != 3);
	cout << "Thanks";
	return 0;
}