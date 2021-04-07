//Week 4 - PART 1: (A - Guided) - Understanding Classes
//Question 8A
// Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int month;
	int day;
	int year;
	static char slash;
	void setMonth(int);
	void setDay(int);
	void setYear(int);
public:
	void setDate(int, int, int);
	void showDate();
};
char Date::slash = '/';

void Date::setDate(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}
void Date::setMonth(int m)
{
	if (m > 12)
		month = 12;
	else
		month = m;
}
void Date::setDay(int d)
{
	if (d > 31)
		day = d;
	else
		day = d;
}
void Date::setYear(int y)
{
	year = y;
}
void Date::showDate()
{
	cout << "Date: " << month << slash << day << slash << year << endl;
}
int main()
{
	Date birthday, anniversary, graduation, party;
	birthday.setDate(8, 02, 1989);
	anniversary.setDate(07, 01, 2019);
	graduation.setDate(4, 2, 2019);
	party.setDate(6, 15, 2020);
	cout << "Birthday ";
	birthday.showDate();
	cout << "Anniversary ";
	anniversary.showDate();
	cout << "Graduation ";
	graduation.showDate();
	cout << "Party Hardy ";
	party.showDate();


	return 0;
}