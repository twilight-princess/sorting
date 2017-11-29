#ifndef BUBBLE_H
#define BUBBLE_H

#include"Sort.h" 

class Bubble : public Sort
{
	public:
		Bubble(int sortedNot[]);
		virtual void sort();
		std::string getSorted();
	private:
		int sortedNot[];
		int sorted[];
}



