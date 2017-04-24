#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main(){

	srand(static_cast<unsigned int>(time(0))); //random number generator
	int randomNumber = rand(); //generate random number
	// get a number btwn 1 and 10
	int number, userNumber;
	int chances = 0;
	//int die = 0;
	bool computerGuess = false;
	//std::string difficulty;
	char dif;


	std::cout << "What difficultly would you like to play? Easy (e) , Medium (m) , or Hard (h)?\n";
	std::cin >> dif;


	switch (dif){
		case 'e':
			std::cout << "Pick a number for the computer to guess between 1 and 1000 " << std::endl;
			std::cin >> userNumber;
			do{
				chances++;
				int die = rand() % 1000 + 1;
				std::cout << "The Computer's guess is " << die << std::endl;

				if (userNumber > die)
					std::cout << "Computer's number is too low" << std::endl;
				else if (userNumber < die)
					std::cout << "Computer's number is too high" << std::endl;
				else if (userNumber == die){
					std::cout << "Computer is right!" << std::endl;
					computerGuess = true;
				std::cout << "Computer has used " << chances << " of 5 chances" << std::endl;
				std::cout << " " << std::endl;
				}
			} while (chances < 5 || computerGuess == false);
			break;
		case 'm':
			std::cout << "Pick a number for the computer to guess between 1 and 100 " << std::endl;
			std::cin >> userNumber;
			do{
				chances++;
				int die = rand() % 100 + 1;
				std::cout << "The Computer's guess is " << die << std::endl;

				if (userNumber > die)
					std::cout << "Computer's number is too low" << std::endl;
				else if (userNumber < die)
					std::cout << "Computer's number is too high" << std::endl;
				else if (userNumber == die){
					std::cout << "Computer is right!" << std::endl;
					computerGuess = true;
					std::cout << "Computer has used " << chances << " of 5 chances" << std::endl;
					std::cout << " " << std::endl;
				}
			} while (chances < 5 || computerGuess == false);
			break;
		case 'h':
			std::cout << "Pick a number for the computer to guess between 1 and 10 " << std::endl;
			std::cin >> userNumber;
			do{
				chances++;
				int die = rand() % 10 + 1;
				std::cout << "The Computer's guess is " << die << std::endl;

				if (userNumber > die)
					std::cout << "Computer's number is too low" << std::endl;
				else if (userNumber < die)
					std::cout << "Computer's number is too high" << std::endl;
				else if (userNumber == die){
					std::cout << "Computer is right!" << std::endl;
					computerGuess = true;
				std::cout << "Computer has used " << chances << " of 5 chances" << std::endl;
				std::cout << " " << std::endl;
				}
			} while (chances < 5 || computerGuess == userNumber);
			break;

	}

	

	/*do{
		chances++;
		int die = rand() % 10 + 1;
		std::cout << "The Computer's guess is " << die << std::endl;

		if (userNumber > die)
			std::cout << "Computer's number is too low" << std::endl;
		else if (userNumber < die)
			std::cout << "Computer's number is too high" << std::endl;
		else if (userNumber == die){
			std::cout << "Computer is right!" << std::endl;
			computerGuess = true;
		}


		

	} while (chances < 5 || computerGuess == false);*/



	return 0;

}