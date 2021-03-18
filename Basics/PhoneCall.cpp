#include<iostream>

using namespace std;

struct PhoneCall

{
    int Minutes;


    //<-remove if we want to change variable minutes to a float, should comment out int Minutes if use this, float Minutes;
};

int main()

{

    PhoneCall MyCallToGrandma;

    double PricePerMinute = .10;

    double costOfCall;
// Ask user for number of minutes.

    cout << " Enter number of minutes ";
//stores user inpout
    cin >> MyCallToGrandma.Minutes;

    cout << " The call is " << MyCallToGrandma.Minutes << " minutes " << endl;

    costOfCall = MyCallToGrandma.Minutes * PricePerMinute;

    cout << " The cost of the call is " << costOfCall << endl;

    return 0;

}