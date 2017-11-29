#include<string>

class Sort
{
  public:
		// carry the virtual keyword to derived classes 
    virtual void sort() = 0; // = 0 means it has to be defined in the derived class so it is pure virtual
    virtual std::string getSorted() = 0; 
}

// there is a shape example in the slides
