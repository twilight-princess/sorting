#ifndef SORT_H
#define SORT_H
#include<string>
#include<ostream>
#include<sstream>
#include<fstream>
#include<vector>

class Sort
{
  public:
		// carry the virtual keyword to derived classes 
    virtual std::vector<int> sort() = 0; // = 0 means it has to be defined in the derived class so it is pure virtual
    //virtual std::string getSorted() = 0; 
		// need a virtual destructor too maybe even in all classes that have a virtual constructor idk
		virtual ~Sort() = 0;
};
Sort::~Sort(){}
#endif
// there is a shape example in the slides
