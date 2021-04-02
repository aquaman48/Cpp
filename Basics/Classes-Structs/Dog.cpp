//Week 4 - PART 1: (A - Guided) - Understanding Classes
//Question 4
// Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;
class Dog
{
private:
	string name;
	string breed;
	int age;
	static double licenseFee;
public:
	void setDogData(string, string, int);
	void showDog();
};
double Dog::licenseFee = 12.25; 

void Dog::setDogData(string dogName, string dogBreed, int dogAge)
{
	name = dogName;
	breed = dogBreed;
	age = dogAge;
}
void Dog::showDog()
{
	cout << "Dog: " << name << " is a " << breed << endl;
	cout << "The dog's age is " << age << endl;
	cout << "License fee: $" << licenseFee << endl;
}
int main()
{
	Dog myDog;
	myDog.setDogData("Ragnar", "German Sheppard", 2);
	myDog.showDog();

	return 0;
}