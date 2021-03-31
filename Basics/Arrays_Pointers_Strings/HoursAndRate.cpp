//Simple program that calculates pay at a given rate and for how many hours worked. 
#include<iostream>
using namespace std;
int main()
{
	double rate;
	int hours;
	double weekly;
	double biweekly;
	double getRate();
	int getHours();
	rate = getRate();
	hours = getHours();
	weekly = rate * hours;
	biweekly = weekly * 2;
	cout << "Weekly pay is $" << weekly << endl;  
	cout << "Biweekly pay is $" << biweekly << endl;   //declared biweekly as a variable on line16
	cout << "Monthly pay is $" << weekly * 4 << endl;  //weekly times 4 not declared still works
	return 0;
}
double getRate()
{
	double rate;
	cout << "Enter your hourly rate in dollars and cents ";
	cin >> rate;
	return rate;
}
int getHours()
{
	int time;
	cout << "Please enter the hours you worked" << endl;
	cout << "You must enter a whole number ";
	cin >> time;
	return time;
}
