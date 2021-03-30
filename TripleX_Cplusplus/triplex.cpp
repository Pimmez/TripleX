#include <iostream> 
#include <ctime>

/// <summary>
/// TripleX Small Game to learn C++ || cl main.cpp /EHsc <- Removes Unnecessary Warnings
/// </summary>

void PrintIntroduction(int Difficulty)
{
	//print welcome messages to the terminal :: Statements
	std::cout << "\n In the medieval times, there was one lockpicker who stood out the most. " << Difficulty;
	std::cout << " going by the name of locki. He entered every dungeon in search of chests to be openend.\n";
	std::cout << "Going into the dungeon locki sees a level " << Difficulty << " chest before him! \n";
	std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	//Declare 3 number code :: DECLARATION STATEMENTS
	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	//Print sum and product to the terminal
	std::cout << std::endl;
	std::cout << "+ There are 3 numbers in the code\n";
	std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
	std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\n*** You Opened the Chest!!, You go deeper into the dungeon, in search of more glory and gold ***";
		return true;
	}
	else
	{
		std::cout << "\n*** You broke your lockpicks, you have to retry that chest again before going anyfurther. ***";
		return false;
	}
}

int main()
{	
	srand(time(NULL)); //Creates new seed based on time of day;

	int LevelDifficulty = 1;
	const int MaxDifficulty = 10;

	while (LevelDifficulty <= MaxDifficulty)
	{
		bool BLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear(); //Clears any errors;
		std::cin.ignore(); //Discards the buffer;

		if (BLevelComplete)
		{
			++LevelDifficulty;
		}
	}

	std::cout << "\n*** Congratulations! You made it out of the dungeon with plenty of gold and glory! You can even call yourself rich! ***\n";

	return 0;
}