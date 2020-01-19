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
	cout << "\nHow many large rooms would you like cleaned?" << endl;

	int numberOfLargeRooms{};
	cin >> numberOfLargeRooms;

	cout << "\nHow many small rooms would you like cleaned? " << endl;

	int numberOfSmallRooms{};
	cin >> numberOfSmallRooms;

	const double pricePerLargeRoom{ 35.0 };
	const double pricePerSmallRoom{ 25.0 };
	const double salesTax{ 0.06 };
	const int estimateExpiry{ 30 };
	int subTotal = (pricePerSmallRoom * numberOfSmallRooms + pricePerLargeRoom * numberOfLargeRooms);
	double finalCost = (subTotal * salesTax + subTotal);

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of  large rooms: " << numberOfLargeRooms << endl;
	cout << "Number of small rooms: " << numberOfSmallRooms << endl;
	cout << "Price per large room: $" << pricePerLargeRoom << endl;
	cout << "Price per small room: $" << pricePerSmallRoom << endl;
	cout << "Cost: $" << (pricePerLargeRoom * numberOfLargeRooms) + (pricePerSmallRoom * numberOfSmallRooms) << endl;
	cout << "Tax: $" << (pricePerLargeRoom * numberOfLargeRooms * salesTax) + (pricePerSmallRoom * numberOfSmallRooms * salesTax) << endl;
	cout << "==========================================" << endl;
	cout << "Total estimate: $" << finalCost << endl;
	cout << "This estimate is valid for " << estimateExpiry << " days." << endl;



	return 0;
}
