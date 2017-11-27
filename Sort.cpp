#include"Sort.h"
#include<string>

class Sort
{
  protected:
    int unsorted[];
    int sorted[];
  public:
    virtual void sort();
    virtual std::string getSorted() = "";
}
