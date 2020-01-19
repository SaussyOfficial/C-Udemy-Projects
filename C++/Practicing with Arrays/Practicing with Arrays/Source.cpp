//Arrays

#include <iostream>

using namespace std;

int main() {

	char vowels[]{ 'a','e','i','o','u' };
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;

	// cin >> vowels[5]	Don't do this! Out of bounds! Arrays don't have bounds checks!

	double hiTemps[]{ 90.1,89.8,77.5,81.6 };
	cout << "\nThe first high temperature is: " << hiTemps[0] << endl;

	hiTemps[0] = 100.7; //set the first element in hiTemps to 100.7
						//this will be gone over in an upcoming section

	cout << "The first high temperature is now: " << hiTemps[0] << endl;

	return 0;
}