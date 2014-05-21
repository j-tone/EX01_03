#include <iostream>
#include <string>

using namespace std;

void ex03();
void ex04();
void Dubs(int &d);
int Add(int rand1, int rand2);
void AddByOne(int &y);

int main()
{
	ex03();
	ex04();
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

void ex04()
{
	int p = 0;
	cout << "Pleases to enter a numero in betwixt or equal to 1 and 10.\n";
	cin >> p;
	while ((p > 10) || (p < 1)){
		cout << "Ah, no. Betwixt 1 and 10.\n";
		cin >> p;
	}

	int sumofcubes = 0;
	for (int i = 0; i < p; i++){
		sumofcubes += (i*i)*i;
	}
	cout << "The sum of cubes from 1 to " << p << " equals " << sumofcubes << ".\n";

	for (int a = 0; a < p; a++){
		cout << "*";
	}
	cout << endl;

	for (int e = 0; e <= 40; e += 2){
		cout << e << " ";
	}
	cout << endl;

	Dubs(p);
	cout << "\nSo I've doubled that one number betwixt 1 and 10 that you gave me earlier.\n";
	cout << "Here it is: " << p << endl << endl;

	cout << "This is the sum of two random numbers: " << Add(rand(), rand()) << endl;
	
	cout << "\nLet's take the number we got earlier and was doubled.\n";
	cout << "That's this number: " << p << endl;
	cout << "And now I just added one to it.\n";
	AddByOne(p);
	cout << p << endl;
}

void Dubs(int &d)
{
	d += d;
}

int Add(int rand1, int rand2)
{
	return (rand1 + rand2);
}

void AddByOne(int &y)
{
	y++;
}