//Chapter 6 Exercise Question 2
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	void companyName();
	cout << "Dear Boss:" << endl;
	companyName();
	cout << " is having one of the best" << endl << "sales  years in recent history. I know the sales team" <<
		endl << "is very excited about the new ";
	companyName();
	cout << endl << "product line, and they are doing their best to spread " <<
		endl << "the world to all ";
	companyName();
	cout << "customers. I have " << endl << "many additional marketing ideas, and " <<
		"look forware to discussing " << endl;
	cout << "them with you!" << endl << endl;

	return 0;
}
void companyName()
{
	cout << "C++ CIAT Software Developers";
}