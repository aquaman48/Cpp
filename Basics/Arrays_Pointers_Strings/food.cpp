#include <iostream>
using namespace std;

class Food
{
public:
	char food;
	void getFood()
	{

		cout << "Food is a thing you eat" << endl;
		cin >> food;
	}
};
class BaconAndEgg : public Food
{
public:
	char food2;
	void getBaconAndEgg()
	{

		cout << "This is an example of the best food you can eat" << endl;
		cin >> food2;
	}
};
class FoodType : public BaconAndEgg
{
public :
	char food3;
	void getFoodType()
	{

		cout << "This is a type of the best food you can eat" << endl;
		cin >> food3;
	}
	void product()
	{
		cout << "\n You told me " << food << ", " << food2 << ", and " << food3; 
	}
};

// main function
int main()
{
	//FoodType obj;
	FoodType a;
	a.getFood();
	a.getBaconAndEgg();
	a.getFoodType();
	a.product();
	return 0;
}