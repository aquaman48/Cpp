//Week 5-PART 2: (B) - Advanced topics
//Part A
//Nicholas Waterman
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
