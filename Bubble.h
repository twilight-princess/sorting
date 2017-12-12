#ifndef BUBBLE_H
#define BUBBLE_H

#include"Sort.h" 

class Bubble : public Sort
{
	public:
		Bubble(std::vector<int> unsorted);
		virtual std::vector<int> sort();
	private:
		std::vector<int> numbers;
};

#endif

