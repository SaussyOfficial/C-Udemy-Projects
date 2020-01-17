#include <iostream>


int main() 
{
	int FavoriteNumber{};
	std::cout << "Enter your favorite number between 1 and 100:";

	std::cin >> FavoriteNumber;

	std::cout << "Amazing! " << FavoriteNumber << " That's my favorite number too!" << std::endl;
	
	system("pause");
	return 0;
	
	
}
