#include <iostream>

using namespace std;

class Upper 
{
public:
  Upper()
  {
    cout << "Upper Cons" << endl;
  }
  ~Upper()
  {
    cout << "Upper Dest" << endl;
  }
};
class Middle: public Upper
{
public:
  Middle()
  {
    cout << "Middle Cons" << endl;
  }
  ~Middle()
  {
    cout << "Middle Dest" << endl;
  }
};
class Lower: public Middle 
{
public:
  Lower()
  {
    cout << "Lower Cons" << endl;
  }
  ~Lower()
  {
    cout << "Lower Dest" << endl;
  }
};


int main(int argc, char* argv[])
{
  Lower l;
}
