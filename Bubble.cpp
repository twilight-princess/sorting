#include"Bubble.h"

Bubble::Bubble(std::vector<int> unsorted)
{
	numbers = unsorted;
}

std::vector<int> Bubble::sort()
{
	int n = numbers.size();
	for (int i = 0; i < n-1; i++) 
	{
		for (int j = 0; j < n-1-i; j++)
		{ 
			if(numbers[j] < numbers[j+1])
			{
				std::swap(numbers[j],numbers[j+1]); 
			}
		}
	}
	return(numbers);
}
