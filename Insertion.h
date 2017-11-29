#ifndef INSERTION_H
#define INSERTION_H

#include"Sort.h"

class Insertion : public Sort
{
	public:
		Insertion(int sortedNot[]);
		virtual void sort();
		std::string getSorted();
	private:
		int sortedNot[];
		int sorted[];
		  
}
