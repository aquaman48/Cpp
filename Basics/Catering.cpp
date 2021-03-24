//Week 3-PART 1: (A-Guided) -Understanding Arrays, Strings, and Pointers
//Exercise Question 10
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	
	const int SIZE = 4;
	int limit[SIZE]{ 1,11,21,40 };
	double price[SIZE]{ 14.99,12.50,10.75,9.45 };
	int meals;
	int x;
	double pr;
	cout << "Enter number of meals ordered ";
	cin >> meals;
	for (x = SIZE - 1; x >= 0; --x)
	{
		if (meals >= limit[x])
		{
			pr = price[x];
			x = 0;
		}
	}
	cout << "The price per meal is $" << pr << endl;
	cout << "Total for " << meals << " meals is $" << (pr * meals) << endl;
	return 0;
}