#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double side1; //user input
	double side2; //user input
	double angle1; //user input
	const double pi = 3.141592;

	cout << "Size of angle between the two sides (degrees) \n";
	cout << "--------------------------------------------- \n";
	cout << "Input first side: ";
	cin >> side1;
	cout << "Input second side: ";
	cin >> side2;
	cout << "Input angle: ";
	cin >> angle1;

	cout << "\n";
	double side3 = sqrt(pow(side1, 2) + pow(side2, 2) - 2 * side1 * side2 * cos(angle1)); //side 3 from user input (why the fuck does it come out in radians..)
	cout << "Length of third side: " << side3 << "\n";
	
	cout << "\n";
	double angle2 = acos((pow(side1, 2) + pow(side2, 2) - pow(side3, 2)) / (2 * side1 * side2)); //second angle
	double angle3 = (180 - angle1 - angle2);
	cout << "The second angle is: " << angle2 << "\n";
	cout << "The third angle is: " << angle3 << "\n";

	return 0;
}
