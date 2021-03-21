//Simple program to take users input of 2 numbers and states whether the first number input is larger or smaller than the second number. 

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