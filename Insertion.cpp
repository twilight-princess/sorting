#include"Insertion.h"

Insertion::Insertion(int sortedNot[])
{
	sortedNot = sNot;
}

std::string Insertion::getSorted()
{
	std::string sortedString = "";
	/*
	1.B[1] = A[1] 
	2.for j = 2 to n  
		{
	3.       i = j - 1 
	4.       while 0 < i and A[j] < B[i] 
	5.             i = i - 1 
	6.            for k = j down-to i + 2
	7.                   B[k] = B[k-1]
	8.            B[i+1] = A[j]   
		}
	*/
	return(sortedString);
}
