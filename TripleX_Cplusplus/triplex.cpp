#include <iostream> 

/// <summary>
/// TripleX Small Game to learn C++ || cl main.cpp /EHsc <- Removes Unnecessary Warnings
/// </summary>
int main()
{
	//print welcome messages to the terminal :: Statements
	std::cout << "In the medieval times, there was one lockpicker who stood out the most." << std::endl;
	std::cout << "going by the name of locki. He entered every dungeon in search of chests to be openend." << std::endl;
	std::cout << "You need to enter the correct codes to continue..." << std::endl;
	
	//Declare 3 number code :: DECLARATION STATEMENTS
	const int number0 = 4;
	const int number1 = 3;
	const int number2 = 2;

	const int sum = number0 + number1 + number2;
	const int product = number0 * number1 * number2;

	//Print sum and product to the terminal
	std::cout << std::endl;
	std::cout << sum << std::endl;
	std::cout << product << std::endl;

	return 0;
}