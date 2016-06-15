#include <iostream>

using namespace std;

class Simple
{
public:
  Simple(){
    cout << "Created" << endl;
  }
  ~Simple(){
    cout << "Destroyed" << endl;
  }
};

int main(int argc, char* argv[])
{
  Simple s;
  
}