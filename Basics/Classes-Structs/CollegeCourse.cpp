//Week 4 You Do it Chapter 7
//Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;

class CollegeCourse
{
	private:
		string department;
		int courseNum;
		int seats;
	public:
		void setDepartmentAndCourse(string, int);
		void setSeats(int);
		void displayCourseData();
};
void CollegeCourse::setDepartmentAndCourse(string dept, int num)
{
	department = dept;
	courseNum = num;
}
void CollegeCourse::setSeats(int seats)
{
	if (seats < 0)
		seats = 0;
	this->seats;
}
void CollegeCourse::displayCourseData()
{
	cout << department << courseNum << " accomadates " << seats << " students " << endl;
}
int main()
{
	CollegeCourse myMondayClass;
	string dept;
	int num;
	int kids;
	cout << "Enter the department that hosts the class, " << endl;
	cout << "for Example 'CIS'>> ";
	cin >> dept;
	cout << "Enter the course number, for example, for " << dept << "101, enter 101 >> ";
	cin >> num;
	cout << "Enter the number of students that are allowed" << endl;
	cout << "to enroll in " << dept << num << " >>  ";
	cin >> kids;
	myMondayClass.setDepartmentAndCourse(dept, num);
	myMondayClass.setDepartmentAndCourse(kids);
	myMondayClass.displayCourseData();
	return 0;
}