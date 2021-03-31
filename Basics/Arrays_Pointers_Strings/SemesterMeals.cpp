//A simple program that deals with a meal plan for someone in college
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 4;
	int rate[SIZE]{ 300, 450, 520, 590 };
	int meals;
	cout << "Enter the number of meals you want per day for your plan " << endl;
	cin >> meals;
	while (meals >= SIZE)
	{
		cout << "Please enter a value less than " << SIZE << endl;
		cin >> meals;
	}
	cout << "Your room and board rate is $" << rate[meals] << endl;
	return 0;
}