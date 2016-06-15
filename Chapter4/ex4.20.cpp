#include <iostream>

using namespace std;

struct simple
{
  int ivalue;
  double dvalue;
};

struct complex
{
  int ivalue;
  double dvalue;
  int* pivalue;
 
  void setZero()
  {
    ivalue = 0;
    dvalue = 0.0d;
    pivalue = NULL;
  }
};

struct complexNoMethod
{
  int ivalue;
  double dvalue;
  int* pivalue;
};

struct empty
{};

int main(int argc, char* argv[])
{
  cout << "int size:" << sizeof(int) << endl; // 4
  cout << "char size:" << sizeof(char) << endl; // 1
  cout << "double size:" << sizeof(double) << endl; // 8
  cout << "float size:" << sizeof(float) << endl; // 4
  cout << "simple size:" << sizeof(simple) << endl; // 16
  cout << "complex size:" << sizeof(complex) << endl; // 24
  cout << "complex no method size:" << sizeof(complexNoMethod) << endl; // 24
  cout << "empty size:" << sizeof(empty) << endl; // 1
  
}