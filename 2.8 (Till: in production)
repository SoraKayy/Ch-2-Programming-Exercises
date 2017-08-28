#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Programming a till \n";
	cout << "------------------ \n";
	cout << "\n";

	double cost;
	double paid;

	cout << "Total in Cost: $";
	cin >> cost;
	cout << "\n";

	cout << "Amount paid: $";
	cin >> paid;
	cout << "\n";

	double change = paid - cost;
	cout << "Your change is: $" << change << "\n";

	double pennies = change * 100; //change converted to pennies

	int dollars = pennies / 100; //receive dollar amt
	cout << "Here is " << dollars << " dollars \n";

	double quarters = pennies - dollars; //$0.xx
	int quarters = quarters / 0.25; //doing this would leave me with a whole # and erase the change
	cout << "Here is " << quarters << " quarters \n";
	
	return 0;
}

