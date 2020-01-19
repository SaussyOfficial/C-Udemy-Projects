/*
	Frank's Carpet Cleaning Service
	Charges $32.5 per room
	Sales tax rate is 6%
	Estimates are valid for pricePerRoom days
	
	Prompt the user for the number of rooms  they would like cleaned
	and provide an estimate such as:
	
	Estimate for carpet cleaning service:
	Number of rooms: 2
	Price per room: $pricePerRoom
	Cost: $60
	Tax: $3.60
	*/

#include <iostream>

using namespace std;



int main() {
	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "\nHow many rooms would you like cleaned?" << endl;

	int numberOfRooms{};
	cin >> numberOfRooms;

	const double pricePerRoom{ 30.0 };
	const double salesTax{ 0.06 };
	const int estimateExpiry{ 30 };

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << numberOfRooms << endl;
	cout << "Price per room: $" << pricePerRoom << endl;
	cout << "Cost: $" << pricePerRoom * numberOfRooms << endl;
	cout << "Tax: $" << pricePerRoom * numberOfRooms * salesTax << endl;
	cout << "==========================================" << endl;
	cout << "Total estimate: $" << (pricePerRoom * numberOfRooms) + (pricePerRoom * numberOfRooms * salesTax) << endl;
	cout << "This estimate is valid for " << estimateExpiry << " days." << endl;



	return 0;
}