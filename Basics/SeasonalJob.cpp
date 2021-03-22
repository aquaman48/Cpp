//Week 2-PART 1: (A-Guided) - Making Decisions 
//Question 10
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	const int MIN_YRS_WORK = 2;
	const int MIN_AGE = 16;
	const int MIN_POUNDS = 40;
	const int MIN_TYPE_SPEED = 50;
	int age, yearsWork, pounds, typeSpeed;
	cout << "How old are you? ";
	cin >> age;
	cout << "How many years of work experience do you have? ";
	cin >> yearsWork;
	cout << "How many pounds can you lift? ";
	cin >> pounds;
	cout << "How fast can you type? ";
	cin >> typeSpeed;
	if (age >= MIN_AGE && yearsWork >= MIN_YRS_WORK && (pounds >= MIN_POUNDS || typeSpeed >= MIN_TYPE_SPEED))
		cout << "Please submit an application! " << endl;
	else
		cout << "Sorry we cannot offer you a job at this time! " << endl;
return 0;
}