#ifndef INSERTION_H
#define INSERTION_H

#include"Sort.h"

class Insertion : public Sort
{
	public:
		Insertion(std::vector<int> unsorted);
		~Insertion();
		virtual std::vector<int> sort();
	private:
		std::vector<int> numbers;
};

#endif
