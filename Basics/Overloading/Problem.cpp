//A "problem" in C++
#include<iostream>
using namespace std;
class Problem
{
protected:
	int numerator;
	int denominator;
	int lessThanOne;
public:
	 Problem(int, int, int);
	 void showNumera();
	 void showDenom();
	 void showLessOne();
};
Problem::Problem(int numera, int denom, int lessOne)
{
	numerator = numera;
	denominator = denom;
	lessThanOne = lessOne;
	
}
