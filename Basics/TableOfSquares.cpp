//Squares number and adds to table, example of a loop in C++
#include<iostream>
using namespace std;
int main()
{
	int count;
	const int LIMIT = 20;
	cout << "Number       Square" << endl;
	for (count = 1; count <= LIMIT; ++count)
	cout << " " << count << "          " << count * count << endl;

	return 0;
}