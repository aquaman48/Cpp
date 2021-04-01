//A C++ program that incorporates the use of functions. Here we use the function quadruple to store and return the users numbers. 
#include<iostream>
using namespace std;
int main()
{
	const int LIMIT = 4;
	int userInput[5];
	int x, uinput, solution;
	int quadruple();
	uinput = quadruple();
	for (x = 0; x <= LIMIT; ++x)
	{
		cout << " You have entered " << uinput << endl;
		cout << uinput << " times four is " << uinput * 4 << endl;
	}
	return 0;
}
int quadruple()
{
	const int LIMIT = 4;
	const int SIZE = 5;
	int usersInput[SIZE]{ usersInput[0] };
	int x, uinput;
	uinput = usersInput[x];
	for (x = 0; x <= LIMIT; ++x)
	{
		cout << "Please enter five whole numbers, one at a time " << (x + 1) << " >> ";
		cin >> usersInput[x];
	}
	return uinput;
}
