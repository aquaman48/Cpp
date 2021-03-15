#include<iostream>

using namespace std;

struct Cake

{
    double PriceOfCake;
    int CalorieCount;
};

int main()

{

    Cake Dessert, Calorie;

    double CAKE_PRICE;

    double CalorieofCake;

    cout << " Enter the cake price ";
    cin >> Dessert.PriceOfCake;
    cout << " Enter the calorie count ";
    cin >> Calorie.CalorieCount;
    cout << " The " << Calorie.CalorieCount << " calorie cake costs $" << Dessert.PriceOfCake << endl;
    cout << "The cost of the cake per calorie is " << Dessert.PriceOfCake / Calorie.CalorieCount << endl;


    return 0;

}