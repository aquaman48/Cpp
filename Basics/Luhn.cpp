#include<iostream>
using namespace std;
	int main()
	{
		int section1, section2, section3, section4;
		int s11, s12, s13, s14, s21, s22, s23, s24,
			s31, s32, s33, s34, s41, s42, s43, s44;
		int total;
		cout << "Enter first four digits of credit card number ";
		cin >> section1;
		cout << "Enter second four digits ";
		cin >> section2;
		cout << "Enter third group of four digits ";
		cin >> section3;
		cout << "Enter last group of four digits ";
		cin >> section4;

		s11 = section1 / 1000;
		section1 = section1 - (s11 * 1000);
		s12 = section1 / 100;
		section1 = section1 - (s12 * 100);
		s13 = section1 / 10;
		section1 = section1 - (s13 * 10);
		s14 = section1;



		s21 = section2 / 1000;
		section2 = section2 - (s21 * 1000);
		s22 = section2 / 100;
		section2 = section2 - (s22 * 100);
		s23 = section2 / 10;
		section2 = section2 - (s23 * 10);
		s24 = section2;



		s31 = section3 / 1000;
		section3 = section3 - (s31 * 1000);
		s32 = section3 / 100;
		section3 = section3 - (s32 * 100);
		s33 = section3 / 10;
		section3 = section3 - (s33 * 10);
		s34 = section3;



		s41 = section4 / 1000;
		section4 = section4 - (s41 * 1000);
		s42 = section4 / 100;
		section4 = section4 - (s42 * 100);
		s43 = section4 / 10;
		section4 = section4 - (s43 * 10);
		s44 = section4;



		total = s12 + s14 + s22 + s24 + s32 + s34 + s42 + s44;
		s11 = s11 * 2;
		total += s11 / 10 + s11 % 10;
		s13 = s13 * 2;
		total += s13 / 10 + s13 % 10;
		s21 = s21 * 2;
		total += s21 / 10 + s21 % 10;
		s23 = s23 * 2;
		total += s23 / 10 + s23 % 10;
		s31 = s31 * 2;
		total += s31 / 10 + s31 % 10;
		s33 = s33 * 2;
		total += s33 / 10 + s33 % 10;
		s41 = s41 * 2;
		total += s41 / 10 + s41 % 10;
		s43 = s43 * 2;
		total += s43 / 10 + s43 % 10;
		total %= 10;
		cout << "Result is " << (total == 0) << endl;
		system("pause");
		return 0;
	}