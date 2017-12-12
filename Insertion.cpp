#include"Insertion.h"

Insertion::Insertion(std::vector<int> unsorted)
{
	numbers = unsorted;
}

std::vector<int> Insertion::sort()
{
	int n = numbers.size();
	int i,j,k;
	for (i = 1; i < n; i++)
	{
		j = i;
		while (0 < j && numbers[j] > numbers[j-1])
		{
			k = numbers[j];
			numbers[j] = numbers[j-1];
			numbers[j-1] = k;
			j--;
		}
	}
	return(numbers);
}
