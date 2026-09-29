// Calculates how many people--out of 16500 total customers--buy energy drinks at least once a week.
// Calculates how many people--out of those who buy energy drinks--prefer a citrus flavor.

#include <iostream>
using namespace std;
int main()
{
	const int totalCustomer = 16500;
	const double energyDrinkP = 0.15;
	const double citrusP = 0.58;

	double energyDrinkCustomers = totalCustomer * energyDrinkP;
	double citrusPreference = energyDrinkCustomers * citrusP;

	cout << "Out of 16,500 customers:" << endl;
	cout << endl;
	cout << "Purchases energy drinks at least once/week: " << energyDrinkCustomers << endl;
	cout << "Prefers citrus-flavored energy drinks: " << citrusPreference << endl;

	return 0;
}