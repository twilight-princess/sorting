#include"Driver.h"
#include<iostream>
#include<stdlib.h>
#include<string>

int main()
{
	bool keepGoing = true;
	while (keepGoing == true) 
	{
		std::cout << "1. Load Integers (From File)" <<std::endl;
		std::cout << "2. Exit Program" <<std::endl;
		std::cout << " " <<std::endl;
		std::cout << "Please enter your selection:"; 
		std::string choice;
		std::cin >> choice;

		if (choice == "1")
		{
			std::cout << "1. Insertion Sort" <<std::endl;
			std::cout << "2. Bubble Sort" <<std::endl;
			std::cout << "3. Exit Program" <<std::endl;
			std::cout << " " <<std::endl;
			std::cout << "Please enter your selection:";
			std::string choice2; 
			std::cin >> choice2;
			
		}
		else if (choice == "2")
		{
			keepGoing = false;
			std::cout << "Goodbye!" << std::endl;	
		}
		else
		{
			std::cout << "Invalid choice! Please select option #1 or option #2" <<std::endl;
			main();
		}
		//delete[] array;
	}
	return 0;
}
