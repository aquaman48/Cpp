//Week 4-PART 2: (B) - Class Features and Design Issues
//Question 8
//Nicholas Waterman
#include<iostream>
using namespace std;
class Car
{
private:
	static int count;
	int car;
public:
		Car();
		~Car();
};
int Car::count = 0;
Car::Car() 
{
	//count++;
	if (count += 1)
		cout << count << " Car object exist " << endl;
	else
		cout << count << " Car objects exists " << endl;
}
Car::~Car()
{
	//count = count - 1;
	//count--;
	if (count -= 1)
		cout << count << " Car object exist " << endl;
	else
		cout << count << " Car objects exists " << endl;
}

int main()
{
	const int SIZE = 5;
	Car aCar[SIZE]{};
	
	return 0;
}