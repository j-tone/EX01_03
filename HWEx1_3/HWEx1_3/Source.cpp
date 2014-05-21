#include <iostream>
#include <string>

using namespace std;

void ex03();

int main()
{
	ex03();
}

void ex03(){
	int sq;
	double si, di;
	cout << "If you will, enter the area of any square (integer): ";
	cin >> sq;
	si = (static_cast<double>(sq)) / 2;
	di = si * sqrt(2);
	cout << "The diagonal of that square is " << di << ".\n";
	
	char a;
	cout << "Was that fun? (y/n) ";
	cin >> a;
	switch (a) {
		case 'y':
			cout << "So that's 'yes'...\n";
			break;
		case 'n':
			cout << "So that's a 'no'...\n";
			break;
		default:
			cout << "Hey man. It's either 'y' or 'n'.\n";
	}

	char tab = '\t';

	string mailingAddress;
	cout << "Enter your address, fool (we'll ask for your SSN and credit card info later).\n";
	cin.ignore();
	getline(cin, mailingAddress);
	cout << "So it's \"" << mailingAddress << ",\" right? Good to know.\n";

	string empty = "I initialized the empty string";
	cout << empty << endl;
}