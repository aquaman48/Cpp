//Week 3 - PART 2: (B)-Using C++ Functions
//Question 3
//Nicholas Waterman
#include<iostream>
using namespace std;
int main()
{
	int num;
	void multiplicationTable(int);
	cout << "Please enter a whole number: ";
	cin >> num;
	multiplicationTable(num);
	return 0;
}
void multiplicationTable(int result)
{
	int prod;
	int multiply = 1; 
	const int END = 9;

	prod = result * multiply;
	while(multiply <= END && ++multiply)
		cout << result << " times " << multiply << " equals " << prod * multiply << endl;
	
	
}
