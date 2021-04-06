//This program here is an example of a Car Class. We are not using any car information, just counting cars at this stage. 
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