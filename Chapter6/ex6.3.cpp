// NB compile with:
// CPPFLAGS+=-std=c++11

#include <iostream>

using namespace std;

class Simple
{
  int value;
public:
  Simple(int v):value{v}{
    cout << "Created" << value << endl;
  }
  ~Simple(){
    cout << "Destroyed" << value << endl;
  }
};

int main(int argc, char* argv[])
{
  Simple s1{10};
  Simple s2{100};
  Simple s3{0xFFFF};
  
}