// Week 4-PART 1: (A-Guided) - Understanding Classes
//Question 1
//Nicholas Waterman
#include<iostream>
#include<string>
using namespace std;
class Movie
{
private:
	string title;
	int year;
	string director;
public:
	void setTitle(string);
	void setYear(int);
	void setDirector(string);
	void display();
};
void Movie::setTitle(string movieTitle)
{
	title = movieTitle;
}
void Movie::setYear(int yr)
{
	year = yr;
}
void Movie::setDirector(string dir)
{
	director = dir;
}
void Movie::display()
{
	cout << title << " made in " << year << " directed by " << director << endl;
}
int main()
{
	Movie myFavoriteMovie;
	myFavoriteMovie.setTitle("Wizard of Oz");
	myFavoriteMovie.setYear(1939);
	myFavoriteMovie.setDirector("Fleming");
	myFavoriteMovie.display();
	return 0;
}