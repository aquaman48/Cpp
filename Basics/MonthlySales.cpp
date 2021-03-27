//Week 3-PART 1: (A-Guided) -Understanding Arrays, Strings, and Pointers
//Exercise Question 3
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	const int MONTHS = 12;
	double sales[MONTHS];
	int x; 
	double total = 0, average;
	for (x = 0; x < MONTHS; ++x)
	{
		cout << "Enter sales for month " << (x + 1) << " >> ";
		cin >> sales[x];
		total += sales[x];
	}
	average = total / MONTHS;

	for (x = 0; x < MONTHS; ++x)
	{
		cout << "$" << sales[x] << " is ";
		if (sales[x] > average)
			cout << "higher";
		else
			if (sales[x] < average)
				cout << "lower";
			else
				cout << "equal to";
		cout << " than the average of $ " << average << " a month" << endl;
	}
	return 0;
}