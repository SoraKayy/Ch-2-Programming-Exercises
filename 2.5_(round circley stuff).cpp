#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double radius;
	const double pi = 3.141592;
	string unit;

	cout << "Radius to area and circumference of a circle | volume and surface area of a sphere \n";
	cout << "----------------------------------------------------------------------------------- \n";
	cout << "Input radius: ";
	cin >> radius;
	cout << "Input unit of measure: ";
	cin >> unit;

	cout << "Area of a circle: " << pi * pow(radius, 2) << " " << unit << " squared \n";
	cout << "Circumference of a circle: " << 2 * pi * radius << " " << unit << "\n";
	cout << "\n";

	cout << "Volume of a sphere: " << (4 / 3) * pi * pow(radius, 3) << " " << unit << " cubed \n";
	cout << "Surface Area of a sphere: " << 4 * pi * pow(radius, 2) << " " << unit << " squared \n";

	return 0;
}

