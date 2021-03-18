#include<iostream>

using namespace std;

struct PhoneCall

{
    int Minutes;


    //  float Minutes;
};

int main()

{

    PhoneCall MyCallToGrandma;

    double PricePerMinute = .10;

    double costOfCall;

    cout << " Enter number of minutes ";

    cin >> MyCallToGrandma.Minutes;

    cout << " The call is " << MyCallToGrandma.Minutes << " minutes " << endl;

    costOfCall = MyCallToGrandma.Minutes * PricePerMinute;

    cout << " The cost of the call is " << costOfCall << endl;

    return 0;

}