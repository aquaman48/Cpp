//Week 5-PART 1:(A-Guided) - Understanding Friends and Overloading Operators
//Chapter 10 Question 3
//Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;
class MusicalComposition
{
protected:
	string compTitle;
	string composer;
	int yearWritten;
public:
	MusicalComposition(string, string, int);
	void showMusicalComposition();
};
MusicalComposition::MusicalComposition(string title, string cmpsr, int year)
{
	compTitle = title;
	composer = cmpsr;
	yearWritten = year;
}
void MusicalComposition::showMusicalComposition()
{
	cout << compTitle << " was written by " << composer << " in " << yearWritten << endl;
}
class NationalAnthem : public MusicalComposition
{
private:
	string nation;
public:
	NationalAnthem(string, string, int, string);
	void showNationalAnthem();
};
NationalAnthem::NationalAnthem(string title, string cmpsr, int year, string country) :
	MusicalComposition(title, cmpsr, year)
{
	nation = country;
}
void NationalAnthem::showNationalAnthem()
{
	showMusicalComposition();
	cout << "it is the national anthem of " << nation;
	cout << endl;
}
int main()
{
	MusicalComposition mc("Symphonie Fantastique", "Berlioz", 1780);
	NationalAnthem na("Star Spangled Banner", "Key", 1778, "US");
	na.showNationalAnthem();
	return 0;
}

