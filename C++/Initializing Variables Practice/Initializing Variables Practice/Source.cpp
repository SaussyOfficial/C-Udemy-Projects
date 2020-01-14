#include <iostream>
#include <windows.h>
using namespace std;
//This program will calculate the area of a room in square feet

int main() {


	
	

	cout << "Enter the width of the room: ";

	int RoomWidth;
	cin >> RoomWidth;

	cout << "Enter the length of the room: ";

	int RoomLength;
	cin >> RoomLength;

	cout << "The area of the room is " << RoomWidth * RoomLength << " square feet." << endl;

	system("pause");

	return 0;
}