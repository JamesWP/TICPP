#include <iostream>

using namespace std;

// func has side effects!
void func(char& arg){ ++arg; }

int main(int argc, char* argv[])
{
  char alpha = 'a';

  cout << "before: " << alpha;

  func(alpha);

  cout << ", after:" << alpha << endl;


}

