#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double side1;
	double side2;
	string unit;

	cout << "Area and Perimeter of a rectangle | length of the diagonal \n";
	cout << "---------------------------------------------------------- \n";
	cout << "Input first side: ";
	cin >> side1;
	cout << "Input second side: ";
	cin >> side2;
	cout << "Input unit of measure: ";
	cin >> unit;

	cout << "\n";

	cout << "Area of rectangle: " << side1 * side2 << " " << unit << " squared \n";
	cout << "Perimeter of rectangle: " << (side1 * 2) + (side2 * 2) << " " << unit << "\n";
	cout << "Length of diagonal: " << sqrt(pow(side1, 2) + pow(side2, 2)) << " " << unit << "\n";

	return 0;
}

