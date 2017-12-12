#include"Driver.h"
#include"Bubble.cpp"
#include"Insertion.cpp"
#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<sstream>

std::string conversion(std::vector<int> numbers)
{
	int n = numbers.size();
  std::string sortedString;
  std::stringstream ss;                                 
  for(int s = 0; s < n; s++)
  {                         
    ss.clear();                   
    ss.str("");      
    ss << numbers[s];         
    sortedString.append(ss.str());      
    if (s < n-1)
    {    
      sortedString.append(", ");
    }                                                                    
  }    
	return(sortedString);
};

int main()
{
	bool keepGoing = true;
	while (keepGoing == true) 
	{
		std::cout << "1. Load Integers (From File)" << std::endl;
		std::cout << "2. Exit Program" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "Please enter your selection: "; 
		std::cout << " " << std::endl;
		std::string choice;
		std::cin >> choice;

		if (choice == "1")
		{
			std::string numberLine;
			std::vector<int> numberArray;
			std::ifstream inputFile("data.txt");
			std::stringstream ss;
			if (inputFile.is_open())
			{
				std::string line;
				while (std::getline(inputFile,line))
				{
					ss.clear();
					ss.str(line);
					std::stringstream converter;
					std::string numberLine;
					while (ss)
					{
					if (!std::getline(ss, numberLine, ',')) break;
					converter.clear();
					converter.str("");
					converter << numberLine;
					int number;
					converter >> number;
					numberArray.push_back(number);
					}
				}
				inputFile.close();
				std::cout << "Unsorted Array: " + conversion(numberArray) << std::endl;
				std::cout << " " << std::endl;
			}
			bool keepGoing2 = true;
			std::cout << "1. Insertion Sort" << std::endl;
			std::cout << "2. Bubble Sort" << std::endl;
			std::cout << "3. Exit Program" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Please enter your selection: ";
			std::cout << " " << std::endl;
			std::string choice2; 
			std::cin >> choice2;
			if (choice2 == "1")
			{
				Insertion *insertion = new Insertion(numberArray);
				std::cout << "Insertion Sort: " + conversion(insertion->sort()) <<std::endl;	
				std::cout << " " << std::endl;
				delete insertion;
			}
			else if (choice2 == "2")
			{
				Bubble *bubble = new Bubble(numberArray);
				std::cout << "Bubble Sort: " + conversion(bubble->sort()) << std::endl;
				std::cout << " " << std::endl;
				delete bubble;
			}
			else
			{
				keepGoing2 = false;
			}
			
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
};
