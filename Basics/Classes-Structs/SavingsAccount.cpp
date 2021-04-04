//Week 4-PART 2: (B) - Class Features and Design Issues
//Question 5
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
class SavingsAcct
{
private:
	Person customer;
	int acctNum;
	double balance;
	double intRate;
public:
	SavingsAcct(Person);
	SavingsAcct(Person, int);
	void displayAcct();
};
//First Constructor
SavingsAcct::SavingsAcct(Person p)
{
	customer = p;
	acctNum = 0;
	balance = 0.0;
	intRate = 0.0;
}
//Second Constructor
SavingsAcct::SavingsAcct(Person p, int num)
{
	customer = p;
	acctNum = num;
	balance = 100.0;
	intRate = .03;
}
void SavingsAcct::displayAcct()
{
	cout << "Customer: ";
	customer.showPerson();
	cout << endl << "Account #" << acctNum << "Balance: $" <<
		balance << endl << "Interest rate is " << (intRate * 100) << "%" << endl;
}
int main()
{
	Person person("Aquaman", "Nick", "92101");
	SavingsAcct acctA(person), acctB(person, 3891);
	cout << " Account using person " << endl;
	acctA.displayAcct();
	cout << endl << "Account using person and account number " << endl;
	acctB.displayAcct();

	return 0;
}