#include <iostream> 

/// <summary>
/// TripleX Small Game to learn C++
/// </summary>
/// <returns></returns>
int main()
{
	//print welcome messages to the terminal
	std::cout << "In the medieval times, there was one lockpicker who stood out the most.";
	std::cout << std::endl;
	std::cout << "going by the name of locki. He entered every dungeon in search of chests to be openend.";
	std::cout << std::endl;
	std::cout << "You need to enter the correct codes to continue...";
	
	//Declare 3 number code
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