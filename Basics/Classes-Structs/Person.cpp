//Week 4-PART 2: (B) - Class Features and Design Issues
//Question 3
//Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	string lastName;
	string firstName;
	string zipCode;
public:
	Person(string = "X", string = "X", string = "X");
	void showPerson();
};
Person::Person(string last, string first, string zip)
{
	lastName = last;
	firstName = first;
	zipCode = zip;
}
void Person::showPerson()
{
	cout << firstName << " " << lastName << " lives in ZIP code " << zipCode << endl;
}
int main()
{
	Person person1, person2("Waterman", "Nick", "92102");
	cout << "Using default values: ";
	person1.showPerson();
	cout << "Using supplied arguments: ";
	person2.showPerson();
	return 0;
}