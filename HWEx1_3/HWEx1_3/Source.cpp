#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void ex02();

void ex03();

void ex04();
void Dubs(int &d);
int Add(int rand1, int rand2);
void AddByOne(int &y);

void ex05();
void arrayCount(int set[], int size);
void arrayAsk(int set[], int size);

int main()
{
	srand(time(NULL));
	ex02();
	ex03();
	ex04();
	ex05();
}

void ex02()
{
	bool hasPassedTest = true;
	int x = rand(), y = rand();
	cout << x << " " << y << endl;
	if (x >= y)
		cout << "X is, in fact, greater than or equal to Y.\n";
	else
		cout << "Nah man, X ain't greater than or equal to Y.\n";

	int numberOfShares;
	cout << "Enter a value for 'numberOfShares': ";
	cin >> numberOfShares;
	cout << ((numberOfShares < 100) ? "It's under 100!\n" : "It's over/equal to 100!\n");

	int bx, bk;
	cout << "Now, enter a box width, and then a book width: ";
	cin >> bx;
	cin >> bk;
	if (bx % bk == 0)
		cout << "So, you can fit " << (bx / bk) << " books evenly along the box's width.\n";
	else
		cout << "You're going to have some space not big enough for a book left over.\n";

	int sl, temp;
	cout << "Now, enter the shelf life of a box of chocolate,\nand then enter the current temperature outside: ";
	cin >> sl;
	cin >> temp;
	if (temp > 90)
		cout << "The new shelf live is now " << sl - 4 << ".\n";
	else
		cout << "The shelf life is still " << sl << ".\n";
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

void ex05()
{
	int numbers[5];
	for (int i = 0; i < 5; i++){
		cout << "Enter an INTEGER please: ";
		cin >> numbers[i];
	}

	int product = 1, sum = 0;
	for (int i = 0; i < 5; i++){
		product *= numbers[i];
		sum += numbers[i];
	}
	cout << "\nThe product of those numbers is: " << product;
	cout << "\nThe sum of those numbers is: " << sum << endl;

	arrayCount(numbers, 5);
	cout << endl;

	arrayAsk(numbers, 5);
}

void arrayCount(int set[], int size)
{
	cout << "\nThese are the numbers in the array:\n";
	for (int i = 0; i < size; i++){
		cout << set[i] << " ";
	}
}

void arrayAsk(int set[], int size)
{
	int p;
	bool value = false;
	cout << "Enter a value, maybe it'll be in the array: ";
	cin >> p;
	for (int i = 0; i < size; i++){
		if (p == set[i]){
			value = true;
		}
	}
	if (value == true)
		cout << "Indeed, you have chosen a value that is inside the array.\n";
	else
		cout << "You didn't pick a value inside the array.\n";
}