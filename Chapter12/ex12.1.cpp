#include <iostream>

using namespace std;

class MyClass
{
public:
  int value;
  
  MyClass(int val):value(val){}
  
  MyClass& operator++()// prefix (change value of this object) 
  {
    cout << "prefix called" << endl;
    value++;
    
    return *this;
  }

  MyClass operator++(int)// postfix (return value then change)
  {
    cout << "postfix" << endl;
    MyClass val = *this;

    value++;

    return val;
  }
};


int main(int argc, char* argv[])
{
  MyClass c(1);

  cout << c.value << endl;
 
  cout << "before prefix" << endl;
  ++c;
  cout << c.value << endl;

  cout << "before postfix" << endl;
  c++;
  cout << c.value << endl;
}
