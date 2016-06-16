#include <iostream>

using namespace std;


int& func(int* val)
{
  ++(*val);
  return *val;
}

int main(int argc, char* argv[])
{
  int alpha = 0;

  int& beta = func(&alpha);

  cout << "alpha=" << alpha << ", beta=" << beta << endl;
}
