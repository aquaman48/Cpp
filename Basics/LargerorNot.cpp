//Week 2-PART 1: (A-Guided) - Making Decisions
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter a second number: ";
	cin >> num2;
	if (num1 > num2)
		cout << "The first number you entered is larger" << endl;
	else
		cout << "The first number is NOT larger " << endl;

	return 0;
}