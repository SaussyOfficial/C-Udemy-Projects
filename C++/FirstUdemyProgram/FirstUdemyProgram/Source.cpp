#include <iostream>


int main() 
{
	int FavoriteNumber{};
	std::cout << "Enter your favorite number between 1 and 100:";

	std::cout << "     " << std::endl;

	std::cin >> FavoriteNumber;

	std::cout << "Amazing! " << FavoriteNumber << " That's my favorite number too!" << std::endl;

    std::cout << "     " << std::endl;

	std::cout << "Press any key to continue..." << std::endl;

	system("pause");
	return 0;
	
	
}